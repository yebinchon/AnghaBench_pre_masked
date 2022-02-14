
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {unsigned char* iov_base; int iov_len; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct msghdr *VAR_3,
    int VAR_4, int VAR_5,
    bool VAR_6, bool VAR_7)
{
 unsigned char VAR_8 = 0;
 struct iovec *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_4, sizeof(struct iovec));
 if (!VAR_9)
  return VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  unsigned char *VAR_11 = FUNC_0(VAR_5, sizeof(char));

  if (!VAR_11) {
   FUNC_1(VAR_2, "iov_count %i/%i OOM\n", VAR_10, VAR_4);
   goto unwind_iov;
  }
  VAR_9[VAR_10].iov_base = VAR_11;
  VAR_9[VAR_10].iov_len = VAR_5;

  if (VAR_6 && VAR_7) {
   int VAR_12;

   for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
    VAR_11[VAR_12] = VAR_8++;
  }
 }

 VAR_3->msg_iov = VAR_9;
 VAR_3->msg_iovlen = VAR_4;

 return 0;
unwind_iov:
 for (VAR_10--; VAR_10 >= 0 ; VAR_10--)
  FUNC_2(VAR_3->msg_iov[VAR_10].iov_base);
 return -VAR_0;
}
