
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {int name; } ;
struct bitstr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bitstr*) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bitstr*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bitstr *VAR_3, const struct field_t *VAR_4,
                       char *VAR_5, int VAR_6)
{
 FUNC_1("%*.s%s\n", VAR_6 * VAR_2, " ", VAR_4->name);

 FUNC_0(VAR_3);
 if (FUNC_2(VAR_3, 0, 0))
  return VAR_0;
 return VAR_1;
}
