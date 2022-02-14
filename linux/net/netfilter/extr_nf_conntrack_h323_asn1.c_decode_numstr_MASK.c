
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {unsigned int lb; int sz; int name; } ;
struct bitstr {int dummy; } ;


 int FUNC_0 (struct bitstr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bitstr*,unsigned int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int VAR_2 ;
 unsigned int FUNC_3 (struct bitstr*,int ) ;
 scalar_t__ FUNC_4 (struct bitstr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct bitstr *VAR_3, const struct field_t *VAR_4,
                         char *VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 FUNC_2("%*.s%s\n", VAR_6 * VAR_2, " ", VAR_4->name);


 if (FUNC_4(VAR_3, 0, VAR_4->sz))
  return VAR_0;
 VAR_7 = FUNC_3(VAR_3, VAR_4->sz) + VAR_4->lb;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3, (VAR_7 << 2));

 if (FUNC_4(VAR_3, 0, 0))
  return VAR_0;
 return VAR_1;
}
