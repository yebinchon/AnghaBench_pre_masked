
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stats {int uid; int bytes; int packets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int*,struct stats*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct stats VAR_3;
 uint32_t VAR_4 = VAR_0;
 uint32_t VAR_5;
 int VAR_6;

 while (FUNC_0(VAR_2, &VAR_4, &VAR_5) > -1) {
  VAR_4 = VAR_5;
  VAR_6 = FUNC_1(VAR_2, &VAR_4, &VAR_3);
  if (VAR_6 < 0) {
   FUNC_2(1, VAR_1, "fail to get entry value of Key: %u\n",
    VAR_4);
  } else {
   FUNC_3("cookie: %u, uid: 0x%x, Packet Count: %lu,"
    " Bytes Count: %lu\n", VAR_4, VAR_3.uid,
    VAR_3.packets, VAR_3.bytes);
  }
 }
}
