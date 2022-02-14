
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int sendpage; int drop_expected; int rate; int iov_count; int iov_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (struct sockmap_options*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_7(int VAR_7, int VAR_8, struct sockmap_options *VAR_9)
{
 char *VAR_10 = FUNC_0(VAR_0, sizeof(char));
 int VAR_11;

 if (VAR_8 == VAR_1)
  VAR_9->sendpage = 1;
 else
  VAR_9->sendpage = 0;

 if (VAR_6)
  VAR_9->drop_expected = 1;
 else
  VAR_9->drop_expected = 0;

 FUNC_5(VAR_10);

 FUNC_2(VAR_4,
  "[TEST %i]: (%i, %i, %i, %s, %s): ",
  VAR_5, VAR_9->rate, VAR_9->iov_count, VAR_9->iov_length,
  FUNC_6(VAR_8), VAR_10);
 FUNC_1(VAR_4);
 VAR_11 = FUNC_4(VAR_9, VAR_7, VAR_8);
 FUNC_2(VAR_4, "%s\n", !VAR_11 ? "PASS" : "FAILED");
 VAR_5++;
 !VAR_11 ? VAR_3++ : VAR_2++;
 FUNC_3(VAR_10);
 return VAR_11;
}
