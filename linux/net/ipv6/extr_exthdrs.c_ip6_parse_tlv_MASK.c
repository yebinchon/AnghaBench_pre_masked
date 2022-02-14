
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlvtype_proc {unsigned char const type; int (* func ) (struct sk_buff*,int) ;} ;
struct sk_buff {int dummy; } ;




 int FUNC_0 (struct sk_buff*,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(const struct tlvtype_proc *VAR_0,
     struct sk_buff *VAR_1,
     int VAR_2)
{
 int VAR_3 = (FUNC_5(VAR_1)[1] + 1) << 3;
 const unsigned char *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = FUNC_4(VAR_1);
 const struct tlvtype_proc *VAR_6;
 bool VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (FUNC_8(VAR_2 < 0)) {
  VAR_7 = 1;
  VAR_2 = -VAR_2;
 }

 if (FUNC_6(VAR_1) + VAR_3 > FUNC_2(VAR_1))
  goto bad;

 VAR_5 += 2;
 VAR_3 -= 2;

 while (VAR_3 > 0) {
  int VAR_10 = VAR_4[VAR_5 + 1] + 2;
  int VAR_11;

  switch (VAR_4[VAR_5]) {
  case 129:
   VAR_10 = 1;
   VAR_9++;
   if (VAR_9 > 7)
    goto bad;
   break;

  case 128:





   VAR_9 += VAR_10;
   if (VAR_9 > 7)
    goto bad;




   for (VAR_11 = 2; VAR_11 < VAR_10; VAR_11++) {
    if (VAR_4[VAR_5 + VAR_11] != 0)
     goto bad;
   }
   break;

  default:
   if (VAR_10 > VAR_3)
    goto bad;

   VAR_8++;
   if (VAR_8 > VAR_2)
    goto bad;

   for (VAR_6 = VAR_0; VAR_6->type >= 0; VAR_6++) {
    if (VAR_6->type == VAR_4[VAR_5]) {



     if (VAR_6->func(VAR_1, VAR_5) == 0)
      return 0;
     break;
    }
   }
   if (VAR_6->type < 0 &&
       !FUNC_0(VAR_1, VAR_5, VAR_7))
    return 0;

   VAR_9 = 0;
   break;
  }
  VAR_5 += VAR_10;
  VAR_3 -= VAR_10;
 }

 if (VAR_3 == 0)
  return 1;
bad:
 FUNC_1(VAR_1);
 return 0;
}
