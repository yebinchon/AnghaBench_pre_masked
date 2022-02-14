
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; int crc; int crc_valid; struct module* module; struct symbol* next; } ;
struct module {int name; struct symbol* unres; } ;
struct buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buffer*,char*,...) ;
 struct symbol* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct buffer *VAR_2, struct module *VAR_3)
{
 struct symbol *VAR_4, *VAR_5;
 int VAR_6 = 0;

 for (VAR_4 = VAR_3->unres; VAR_4; VAR_4 = VAR_4->next) {
  VAR_5 = FUNC_1(VAR_4->name);
  if (!VAR_5 || VAR_5->module == VAR_3)
   continue;
  VAR_4->module = VAR_5->module;
  VAR_4->crc_valid = VAR_5->crc_valid;
  VAR_4->crc = VAR_5->crc;
 }

 if (!VAR_1)
  return VAR_6;

 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, "static const struct modversion_info ____versions[]\n");
 FUNC_0(VAR_2, "__used __section(__versions) = {\n");

 for (VAR_4 = VAR_3->unres; VAR_4; VAR_4 = VAR_4->next) {
  if (!VAR_4->module)
   continue;
  if (!VAR_4->crc_valid) {
   FUNC_4("\"%s\" [%s.ko] has no CRC!\n",
    VAR_4->name, VAR_3->name);
   continue;
  }
  if (FUNC_3(VAR_4->name) >= VAR_0) {
   FUNC_2("too long symbol \"%s\" [%s.ko]\n",
          VAR_4->name, VAR_3->name);
   VAR_6 = 1;
   break;
  }
  FUNC_0(VAR_2, "\t{ %#8x, \"%s\" },\n",
      VAR_4->crc, VAR_4->name);
 }

 FUNC_0(VAR_2, "};\n");

 return VAR_6;
}
