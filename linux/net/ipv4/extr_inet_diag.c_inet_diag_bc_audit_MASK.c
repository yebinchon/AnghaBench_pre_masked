
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct inet_diag_bc_op {int code; int no; int yes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff const*,int ) ;
 void* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (void const*,int,int) ;
 int FUNC_4 (void const*,int,int*) ;
 int FUNC_5 (void const*,int,int*) ;
 int FUNC_6 (void const*,int,int*) ;
 int FUNC_7 (void const*,int,int*) ;

__attribute__((used)) static int FUNC_8(const struct nlattr *VAR_3,
         const struct sk_buff *VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_4, VAR_0);
 const void *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3 || FUNC_2(VAR_3) < sizeof(struct inet_diag_bc_op))
  return -VAR_1;

 VAR_6 = VAR_7 = FUNC_1(VAR_3);
 VAR_9 = VAR_8 = FUNC_2(VAR_3);

 while (VAR_9 > 0) {
  int VAR_10 = sizeof(struct inet_diag_bc_op);
  const struct inet_diag_bc_op *VAR_11 = VAR_7;

  switch (VAR_11->code) {
  case 131:
  case 138:
   if (!FUNC_5(VAR_7, VAR_9, &VAR_10))
    return -VAR_1;
   break;
  case 139:
   if (!FUNC_4(VAR_7, VAR_9, &VAR_10))
    return -VAR_1;
   break;
  case 130:
  case 129:
  case 128:
  case 137:
  case 136:
  case 135:
   if (!FUNC_7(VAR_7, VAR_9, &VAR_10))
    return -VAR_1;
   break;
  case 133:
   if (!VAR_5)
    return -VAR_2;
   if (!FUNC_6(VAR_7, VAR_9, &VAR_10))
    return -VAR_1;
   break;
  case 140:
  case 134:
  case 132:
   break;
  default:
   return -VAR_1;
  }

  if (VAR_11->code != 132) {
   if (VAR_11->no < VAR_10 || VAR_11->no > VAR_9 + 4 || VAR_11->no & 3)
    return -VAR_1;
   if (VAR_11->no < VAR_9 &&
       !FUNC_3(VAR_6, VAR_8, VAR_9 - VAR_11->no))
    return -VAR_1;
  }

  if (VAR_11->yes < VAR_10 || VAR_11->yes > VAR_9 + 4 || VAR_11->yes & 3)
   return -VAR_1;
  VAR_7 += VAR_11->yes;
  VAR_9 -= VAR_11->yes;
 }
 return VAR_9 == 0 ? 0 : -VAR_1;
}
