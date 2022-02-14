
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {int attr; int sz; int name; } ;
struct bitstr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bitstr*,int) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bitstr*) ;
 scalar_t__ FUNC_3 (struct bitstr*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct bitstr *VAR_4, const struct field_t *VAR_5,
                       char *VAR_6, int VAR_7)
{
 FUNC_1("%*.s%s\n", VAR_7 * VAR_3, " ", VAR_5->name);

 if ((VAR_5->attr & VAR_0) && FUNC_2(VAR_4)) {
  FUNC_0(VAR_4, 7);
 } else {
  FUNC_0(VAR_4, VAR_5->sz);
 }

 if (FUNC_3(VAR_4, 0, 0))
  return VAR_1;
 return VAR_2;
}
