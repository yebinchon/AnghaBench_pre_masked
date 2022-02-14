
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int sk_route_caps; } ;
struct TYPE_2__ {int curr; int end; scalar_t__ copybreak; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {scalar_t__ length; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int,struct iov_iter*) ;
 int FUNC_1 (void*,int,struct iov_iter*) ;
 void* FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct sk_msg*,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct sock *VAR_3, struct iov_iter *VAR_4,
        struct sk_msg *VAR_5, u32 VAR_6)
{
 int VAR_7 = -VAR_1, VAR_8 = VAR_5->sg.curr;
 struct scatterlist *VAR_9;
 u32 VAR_10, VAR_11;
 void *VAR_12;

 do {
  VAR_9 = FUNC_3(VAR_5, VAR_8);

  if (VAR_5->sg.copybreak >= VAR_9->length) {
   VAR_5->sg.copybreak = 0;
   FUNC_4(VAR_8);
   if (VAR_8 == VAR_5->sg.end)
    break;
   VAR_9 = FUNC_3(VAR_5, VAR_8);
  }

  VAR_11 = VAR_9->length - VAR_5->sg.copybreak;
  VAR_10 = (VAR_11 > VAR_6) ? VAR_6 : VAR_11;
  VAR_12 = FUNC_2(VAR_9) + VAR_5->sg.copybreak;
  VAR_5->sg.copybreak += VAR_10;
  if (VAR_3->sk_route_caps & VAR_2)
   VAR_7 = FUNC_1(VAR_12, VAR_10, VAR_4);
  else
   VAR_7 = FUNC_0(VAR_12, VAR_10, VAR_4);
  if (VAR_7 != VAR_10) {
   VAR_7 = -VAR_0;
   goto out;
  }
  VAR_6 -= VAR_10;
  if (!VAR_6)
   break;
  VAR_5->sg.copybreak = 0;
  FUNC_4(VAR_8);
 } while (VAR_8 != VAR_5->sg.end);
out:
 VAR_5->sg.curr = VAR_8;
 return VAR_7;
}
