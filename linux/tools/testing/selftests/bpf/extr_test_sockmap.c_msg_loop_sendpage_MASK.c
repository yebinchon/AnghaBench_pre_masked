
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int drop_expected; } ;
struct msg_stats {int bytes_sent; int end; int start; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int,int *,int) ;

__attribute__((used)) static int FUNC_11(int VAR_4, int VAR_5, int VAR_6,
        struct msg_stats *VAR_7,
        struct sockmap_options *VAR_8)
{
 bool VAR_9 = VAR_8->drop_expected;
 unsigned char VAR_10 = 0;
 FILE *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_4(".sendpage_tst.tmp", "w+");
 for (VAR_12 = 0; VAR_12 < VAR_5 * VAR_6; VAR_12++, VAR_10++)
  FUNC_6(&VAR_10, sizeof(char), 1, VAR_11);
 FUNC_3(VAR_11);
 FUNC_5(VAR_11, 0, VAR_3);
 FUNC_2(VAR_11);

 VAR_13 = FUNC_7(".sendpage_tst.tmp", VAR_2);
 FUNC_0(VAR_0, &VAR_7->start);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  int VAR_14 = FUNC_10(VAR_4, VAR_13, ((void*)0), VAR_5);

  if (!VAR_9 && VAR_14 < 0) {
   FUNC_8("send loop error:");
   FUNC_1(VAR_13);
   return VAR_14;
  } else if (VAR_9 && VAR_14 >= 0) {
   FUNC_9("sendpage loop error expected: %i\n", VAR_14);
   FUNC_1(VAR_13);
   return -VAR_1;
  }

  if (VAR_14 > 0)
   VAR_7->bytes_sent += VAR_14;
 }
 FUNC_0(VAR_0, &VAR_7->end);
 FUNC_1(VAR_13);
 return 0;
}
