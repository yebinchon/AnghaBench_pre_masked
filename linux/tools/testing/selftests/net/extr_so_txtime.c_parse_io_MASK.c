
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timed_send {int delay_us; char data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, struct timed_send *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  FUNC_0(1, VAR_1, "strdup");

 while ((VAR_5 = FUNC_3(VAR_4, ","))) {
  VAR_4 = ((void*)0);

  if (VAR_6 / 2 == VAR_0)
   FUNC_0(1, 0, "exceeds max pkt count (%d)", VAR_0);

  if (VAR_6 & 1) {
   VAR_3->delay_us = FUNC_4(VAR_5, ((void*)0), 0) * 1000;
   VAR_3++;
  } else {
   VAR_3->data = VAR_5[0];
  }

  VAR_6++;
 }

 FUNC_1(VAR_4);

 return VAR_6 / 2;
}
