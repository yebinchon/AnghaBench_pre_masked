
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dev_table_buf; int name; } ;
typedef int acpi_id ;


 int FUNC_0 (void*,int ,char**) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long const,void*) ;
 char** VAR_1 ;
 int VAR_2 ;
 char FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, unsigned long VAR_4,
    struct module *VAR_5)
{
 const unsigned long VAR_6 = VAR_0;
 const unsigned int VAR_7 = (VAR_4 / VAR_6)-1;
 unsigned int VAR_8;

 FUNC_2(VAR_5->name, "pnp", VAR_4, VAR_6, VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_0(VAR_3 + VAR_8*VAR_6, VAR_2, VAR_1);
  char VAR_9[sizeof(*VAR_1)];
  int VAR_10;

  FUNC_1(&VAR_5->dev_table_buf,
      "MODULE_ALIAS(\"pnp:d%s*\");\n", *VAR_1);


  for (VAR_10 = 0; VAR_10 < sizeof(VAR_9); VAR_10++)
   VAR_9[VAR_10] = FUNC_3((*VAR_1)[VAR_10]);
  FUNC_1(&VAR_5->dev_table_buf,
      "MODULE_ALIAS(\"acpi*:%s:*\");\n", VAR_9);
 }
}
