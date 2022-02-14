
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {int name; } ;
struct bitstr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct bitstr *VAR_2, const struct field_t *VAR_3,
                      char *VAR_4, int VAR_5)
{
 FUNC_0("%*.s%s\n", VAR_5 * VAR_1, " ", VAR_3->name);

 return VAR_0;
}
