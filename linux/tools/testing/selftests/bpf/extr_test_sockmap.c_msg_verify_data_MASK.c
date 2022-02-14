
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_2__ {unsigned char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct msghdr *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 unsigned char VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->msg_iovlen; VAR_5++) {
  unsigned char *VAR_9 = VAR_2->msg_iov[VAR_5].iov_base;

  for (VAR_6 = 0;
       VAR_6 < VAR_2->msg_iov[VAR_5].iov_len && VAR_3; VAR_6++) {
   if (VAR_9[VAR_6] != VAR_8++) {
    FUNC_0(VAR_1,
     "detected data corruption @iov[%i]:%i %02hhx != %02hhx, %02hhx ?= %02hhx\n",
     VAR_5, VAR_6, VAR_9[VAR_6], VAR_8 - 1, VAR_9[VAR_6+1], VAR_8);
    return -VAR_0;
   }
   VAR_7++;
   if (VAR_7 == VAR_4) {
    VAR_8 = 0;
    VAR_7 = 0;
   }
   VAR_3--;
  }
 }
 return 0;
}
