
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {int sz; int attr; unsigned int lb; int offset; int name; } ;
struct bitstr {int cur; } ;



 int FUNC_0 (struct bitstr*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bitstr*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;


 int FUNC_3 (struct bitstr*,int) ;
 unsigned int FUNC_4 (struct bitstr*) ;
 unsigned int FUNC_5 (struct bitstr*,unsigned int) ;
 scalar_t__ FUNC_6 (struct bitstr*,int,int) ;

__attribute__((used)) static int FUNC_7(struct bitstr *VAR_4, const struct field_t *VAR_5,
                      char *VAR_6, int VAR_7)
{
 unsigned int VAR_8;

 FUNC_2("%*.s%s", VAR_7 * VAR_3, " ", VAR_5->name);

 switch (VAR_5->sz) {
 case 131:
  FUNC_0(VAR_4);
  VAR_4->cur++;
  break;
 case 128:
  FUNC_0(VAR_4);
  VAR_4->cur += 2;
  break;
 case 130:
  if (FUNC_6(VAR_4, 0, 2))
   return VAR_1;
  VAR_8 = FUNC_3(VAR_4, 2) + 1;
  FUNC_0(VAR_4);
  if (VAR_6 && (VAR_5->attr & VAR_0)) {
   unsigned int VAR_9 = FUNC_5(VAR_4, VAR_8) + VAR_5->lb;
   FUNC_2(" = %u", VAR_9);
   *((unsigned int *)(VAR_6 + VAR_5->offset)) = VAR_9;
  }
  VAR_4->cur += VAR_8;
  break;
 case 129:
  FUNC_0(VAR_4);
  if (FUNC_6(VAR_4, 2, 0))
   return VAR_1;
  VAR_8 = FUNC_4(VAR_4);
  VAR_4->cur += VAR_8;
  break;
 default:
  FUNC_1(VAR_4, VAR_5->sz);
  break;
 }

 FUNC_2("\n");

 if (FUNC_6(VAR_4, 0, 0))
  return VAR_1;
 return VAR_2;
}
