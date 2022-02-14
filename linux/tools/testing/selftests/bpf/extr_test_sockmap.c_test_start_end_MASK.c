
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int rate; int iov_count; int iov_length; int member_0; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct sockmap_options*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(int VAR_7)
{
 struct sockmap_options VAR_8 = {0};
 int VAR_9, VAR_10;


 VAR_4 = 1;
 VAR_1 = 2;
 VAR_6 = 1;
 VAR_2 = 2;
 VAR_5 = 1;
 VAR_3 = 1;
 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9)
  goto out;


 VAR_4 = 1;
 VAR_1 = 2;
 VAR_6 = 1;
 VAR_2 = 3;
 VAR_5 = 1;
 VAR_3 = 1;
 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9)
  goto out;


 VAR_8.rate = 16;
 VAR_8.iov_count = 1;
 VAR_8.iov_length = 100;
 VAR_0 = 1600;

 VAR_5 = 0;
 VAR_3 = 0;

 for (VAR_10 = 99; VAR_10 <= 1600; VAR_10 += 500) {
  VAR_4 = 0;
  VAR_1 = VAR_10;
  VAR_6 = 0;
  VAR_2 = VAR_10;
  VAR_9 = FUNC_1(VAR_7, &VAR_8);
  if (VAR_9)
   goto out;
 }


 for (VAR_10 = 99; VAR_10 <= 1600; VAR_10 += 500) {
  VAR_5 = 10;
  VAR_3 = VAR_10;
  VAR_9 = FUNC_1(VAR_7, &VAR_8);
  if (VAR_9)
   goto out;
 }
 VAR_5 = 0;
 VAR_3 = 0;


 for (VAR_10 = 199; VAR_10 <= 1600; VAR_10 += 500) {
  VAR_4 = 100;
  VAR_1 = VAR_10;
  VAR_6 = 100;
  VAR_2 = VAR_10;
  VAR_9 = FUNC_1(VAR_7, &VAR_8);
  if (VAR_9)
   goto out;
 }


 VAR_4 = 1500;
 VAR_1 = 1600;
 VAR_6 = 1500;
 VAR_2 = 1600;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_5 = 1500;
 VAR_3 = 1600;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;
 VAR_5 = 0;
 VAR_3 = 0;


 VAR_4 = 1111;
 VAR_1 = 1112;
 VAR_6 = 1111;
 VAR_2 = 1112;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_5 = 1111;
 VAR_3 = 1112;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_4 = 1111;
 VAR_1 = 0;
 VAR_6 = 1111;
 VAR_2 = 0;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_4 = 0;
 VAR_1 = 1601;
 VAR_6 = 0;
 VAR_2 = 1601;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_4 = 1601;
 VAR_1 = 1600;
 VAR_6 = 1601;
 VAR_2 = 1600;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_5 = 1601;
 VAR_3 = 1;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;


 VAR_5 = 1599;
 VAR_3 = 10;
 VAR_9 = FUNC_1(VAR_7, &VAR_8);
out:
 VAR_4 = 0;
 VAR_1 = 0;
 FUNC_0();
 return VAR_9;
}
