
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring {int type; int version; int rd_len; int rd_num; int * rd; int req3; int req; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ring*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ring*,unsigned int,int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,int,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_7(int VAR_4, struct ring *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9 = 256;

 VAR_5->type = VAR_7;
 VAR_5->version = VAR_6;

 switch (VAR_6) {
 case 130:
 case 129:
  if (VAR_7 == VAR_0)
   FUNC_1(VAR_4);
  FUNC_0(VAR_5, VAR_9);
  VAR_8 = FUNC_6(VAR_4, VAR_1, VAR_7, &VAR_5->req,
     sizeof(VAR_5->req));
  break;

 case 128:
  FUNC_2(VAR_5, VAR_9, VAR_7);
  VAR_8 = FUNC_6(VAR_4, VAR_1, VAR_7, &VAR_5->req3,
     sizeof(VAR_5->req3));
  break;
 }

 if (VAR_8 == -1) {
  FUNC_5("setsockopt");
  FUNC_3(1);
 }

 VAR_5->rd_len = VAR_5->rd_num * sizeof(*VAR_5->rd);
 VAR_5->rd = FUNC_4(VAR_5->rd_len);
 if (VAR_5->rd == ((void*)0)) {
  FUNC_5("malloc");
  FUNC_3(1);
 }

 VAR_3 = 0;
 VAR_2 = 0;
}
