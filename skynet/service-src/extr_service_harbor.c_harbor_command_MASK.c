
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct slave {int fd; int status; } ;
struct remote_name {char* name; int handle; } ;
struct harbor {int ctx; struct slave* s; } ;
typedef int rn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct harbor*,int) ;
 int FUNC_1 (struct harbor*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (struct remote_name*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,char*,int*,int*) ;
 int FUNC_7 (struct harbor*,char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct harbor * VAR_4, const char * VAR_5, size_t VAR_6, int VAR_7, uint32_t VAR_8) {
 const char * VAR_9 = VAR_5 + 2;
 int VAR_10 = (int)VAR_6;
 VAR_10 -= 2;
 switch(VAR_5[0]) {
 case 'N' : {
  if (VAR_10 <=0 || VAR_10>= VAR_0) {
   FUNC_4(VAR_4->ctx, "Invalid global name %s", VAR_9);
   return;
  }
  struct remote_name VAR_11;
  FUNC_3(&VAR_11, 0, sizeof(VAR_11));
  FUNC_2(VAR_11.name, VAR_9, VAR_10);
  VAR_11.handle = VAR_8;
  FUNC_7(VAR_4, VAR_11.name, VAR_11.handle);
  break;
 }
 case 'S' :
 case 'A' : {
  char VAR_12[VAR_10+1];
  FUNC_2(VAR_12, VAR_9, VAR_10);
  VAR_12[VAR_10] = 0;
  int VAR_13=0, VAR_14=0;
  FUNC_6(VAR_12, "%d %d",&VAR_13,&VAR_14);
  if (VAR_13 == 0 || VAR_14 <= 0 || VAR_14>=VAR_1) {
   FUNC_4(VAR_4->ctx, "Invalid command %c %s", VAR_5[0], VAR_12);
   return;
  }
  struct slave * VAR_15 = &VAR_4->s[VAR_14];
  if (VAR_15->fd != 0) {
   FUNC_4(VAR_4->ctx, "Harbor %d alreay exist", VAR_14);
   return;
  }
  VAR_15->fd = VAR_13;

  FUNC_5(VAR_4->ctx, VAR_13);
  FUNC_1(VAR_4, VAR_14);
  if (VAR_5[0] == 'S') {
   VAR_15->status = VAR_2;
  } else {
   VAR_15->status = VAR_3;
   FUNC_0(VAR_4,VAR_14);
  }
  break;
 }
 default:
  FUNC_4(VAR_4->ctx, "Unknown command %s", VAR_5);
  return;
 }
}
