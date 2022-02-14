
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int iov_length; int iov_count; int rate; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct sockmap_options*) ;

__attribute__((used)) static int FUNC_2(struct sockmap_options *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->iov_length = 1;
 VAR_0->iov_count = 1;
 VAR_0->rate = 1;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;

 VAR_0->iov_length = 1;
 VAR_0->iov_count = 1024;
 VAR_0->rate = 1;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;

 VAR_0->iov_length = 1024;
 VAR_0->iov_count = 1;
 VAR_0->rate = 1;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;

 VAR_0->iov_length = 1;
 VAR_0->iov_count = 1;
 VAR_0->rate = 512;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;

 VAR_0->iov_length = 256;
 VAR_0->iov_count = 1024;
 VAR_0->rate = 2;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;

 VAR_0->rate = 100;
 VAR_0->iov_count = 1;
 VAR_0->iov_length = 5;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  goto out;
out:
 FUNC_0();
 return VAR_2;
}
