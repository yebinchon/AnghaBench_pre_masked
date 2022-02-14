
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnep_session {int flags; } ;
typedef int pkt ;



 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnep_session*,void*,int) ;
 int FUNC_1 (struct bnep_session*,void*,int) ;
 int FUNC_2 (struct bnep_session*,int*,int) ;
 int FUNC_3 (struct bnep_session*,int const,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct bnep_session *VAR_5, void *VAR_6, int VAR_7)
{
 u8 VAR_8 = *(u8 *)VAR_6;
 int VAR_9 = 0;

 VAR_6++;
 VAR_7--;

 switch (VAR_8) {
 case 134:
 case 128:
 case 131:
 case 133:

  break;

 case 130:
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
  break;

 case 132:
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
  break;

 case 129:

  if (FUNC_5(VAR_2, &VAR_5->flags) &&
      !FUNC_4(VAR_3, &VAR_5->flags))
   VAR_9 = FUNC_3(VAR_5, 128,
         VAR_4);
  else
   VAR_9 = FUNC_3(VAR_5, 128,
         VAR_0);
  break;

 default: {
   u8 VAR_10[3];
   VAR_10[0] = VAR_1;
   VAR_10[1] = 134;
   VAR_10[2] = VAR_8;
   VAR_9 = FUNC_2(VAR_5, VAR_10, sizeof(VAR_10));
  }
  break;
 }

 return VAR_9;
}
