
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sock {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {unsigned int seq; unsigned int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct sock*,int ,struct sk_buff*,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_3, struct sk_buff *VAR_4,
      u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 bool VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_8 = !FUNC_1(VAR_5, FUNC_0(VAR_4)->seq) &&
    !FUNC_2(VAR_6, FUNC_0(VAR_4)->end_seq);

 if (FUNC_5(VAR_4) > 1 && !VAR_8 &&
     FUNC_1(FUNC_0(VAR_4)->end_seq, VAR_5)) {
  VAR_10 = FUNC_4(VAR_4);
  VAR_8 = !FUNC_1(VAR_5, FUNC_0(VAR_4)->seq);

  if (!VAR_8) {
   VAR_9 = VAR_5 - FUNC_0(VAR_4)->seq;
   if (VAR_9 < VAR_10)
    VAR_9 = VAR_10;
  } else {
   VAR_9 = VAR_6 - FUNC_0(VAR_4)->seq;
   if (VAR_9 < VAR_10)
    return -VAR_0;
  }




  if (VAR_9 > VAR_10) {
   unsigned int VAR_11 = (VAR_9 / VAR_10) * VAR_10;
   if (!VAR_8 && VAR_11 < VAR_9)
    VAR_11 += VAR_10;
   VAR_9 = VAR_11;
  }

  if (VAR_9 >= VAR_4->len && !VAR_8)
   return 0;

  VAR_7 = FUNC_3(VAR_3, VAR_2, VAR_4,
       VAR_9, VAR_10, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return VAR_8;
}
