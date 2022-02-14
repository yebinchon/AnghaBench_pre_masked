
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int base; int sendpage; int data_test; int drop_expected; int iov_count; int iov_length; int rate; scalar_t__ verbose; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct sockmap_options*) ;

__attribute__((used)) static int FUNC_2(int VAR_0)
{
 struct sockmap_options VAR_1;

 int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_1.verbose = 0;
 VAR_1.base = 0;
 VAR_1.sendpage = 0;
 VAR_1.data_test = 0;
 VAR_1.drop_expected = 0;
 VAR_1.iov_count = 0;
 VAR_1.iov_length = 0;
 VAR_1.rate = 0;

 VAR_5 = 1;
 for (VAR_3 = 1; VAR_3 < 100; VAR_3 += 33) {
  for (VAR_4 = 1; VAR_4 < 100; VAR_4 += 33) {
   VAR_1.rate = VAR_5;
   VAR_1.iov_count = VAR_3;
   VAR_1.iov_length = VAR_4;
   VAR_2 = FUNC_1(VAR_0, &VAR_1);
   if (VAR_2)
    goto out;
  }
 }
 FUNC_0();
out:
 return VAR_2;
}
