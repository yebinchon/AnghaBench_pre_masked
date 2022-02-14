
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cfmuxl {int dummy; } ;
struct cflayer {int (* receive ) (struct cflayer*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*) ;
 scalar_t__ FUNC_1 (struct cfpkt*,int *,int) ;
 int FUNC_2 (struct cflayer*) ;
 int FUNC_3 (struct cflayer*) ;
 struct cfmuxl* FUNC_4 (struct cflayer*) ;
 struct cflayer* FUNC_5 (struct cfmuxl*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct cflayer*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_11(struct cflayer *VAR_1, struct cfpkt *VAR_2)
{
 int VAR_3;
 struct cfmuxl *VAR_4 = FUNC_4(VAR_1);
 u8 VAR_5;
 struct cflayer *VAR_6;
 if (FUNC_1(VAR_2, &VAR_5, 1) < 0) {
  FUNC_7("erroneous Caif Packet\n");
  FUNC_0(VAR_2);
  return -VAR_0;
 }
 FUNC_8();
 VAR_6 = FUNC_5(VAR_4, VAR_5);

 if (VAR_6 == ((void*)0)) {
  FUNC_6("Received data on unknown link ID = %d (0x%x)"
   " up == NULL", VAR_5, VAR_5);
  FUNC_0(VAR_2);





  FUNC_9();
  return 0;
 }


 FUNC_2(VAR_6);
 FUNC_9();

 VAR_3 = VAR_6->receive(VAR_6, VAR_2);

 FUNC_3(VAR_6);
 return VAR_3;
}
