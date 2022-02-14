
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacket_hdr {scalar_t__ tp_status; int tp_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int ,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int,int *,int ,int ,int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_5, void *VAR_6, char VAR_7)
{
 struct tpacket_hdr *VAR_8 = VAR_6;
 int VAR_9;

 while (VAR_8->tp_status != VAR_0)
  FUNC_3(1000);

 FUNC_0(VAR_6 + VAR_4, VAR_2, VAR_7);

 VAR_8->tp_len = VAR_2;
 VAR_8->tp_status = VAR_1;

 VAR_9 = FUNC_2(VAR_5, ((void*)0), 0, 0, ((void*)0), 0);
 if (VAR_9 == -1)
  FUNC_1(1, VAR_3, "kick tx");
}
