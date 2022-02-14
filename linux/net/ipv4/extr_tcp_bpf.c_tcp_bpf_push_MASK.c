
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; int size; scalar_t__ end; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {int length; int offset; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct page*,int,int,int) ;
 int FUNC_1 (struct sock*,struct page*,int,int,int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct scatterlist*,int) ;
 struct page* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct sock*,int) ;
 struct scatterlist* FUNC_6 (struct sk_msg*,scalar_t__) ;
 int FUNC_7 (struct sk_msg*,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_2, struct sk_msg *VAR_3, u32 VAR_4,
   int VAR_5, bool VAR_6)
{
 bool VAR_7 = VAR_4;
 struct scatterlist *VAR_8;
 struct page *VAR_9;
 int VAR_10, VAR_11 = 0;
 u32 VAR_12;

 while (1) {
  bool VAR_13;

  VAR_8 = FUNC_6(VAR_3, VAR_3->sg.start);
  VAR_10 = (VAR_7 && VAR_4 < VAR_8->length) ?
   VAR_4 : VAR_8->length;
  VAR_12 = VAR_8->offset;
  VAR_9 = FUNC_4(VAR_8);

  FUNC_8(VAR_2);
retry:
  VAR_13 = FUNC_9(VAR_2);
  if (VAR_13) {
   VAR_5 |= VAR_0;
   VAR_11 = FUNC_1(VAR_2,
           VAR_9, VAR_12, VAR_10, VAR_5);
  } else {
   VAR_11 = FUNC_0(VAR_2, VAR_9, VAR_12, VAR_10, VAR_5);
  }

  if (VAR_11 <= 0)
   return VAR_11;
  if (VAR_7)
   VAR_4 -= VAR_11;
  VAR_3->sg.size -= VAR_11;
  VAR_8->offset += VAR_11;
  VAR_8->length -= VAR_11;
  if (VAR_6)
   FUNC_5(VAR_2, VAR_11);
  if (VAR_11 != VAR_10) {
   VAR_10 -= VAR_11;
   VAR_12 += VAR_11;
   goto retry;
  }
  if (!VAR_8->length) {
   FUNC_2(VAR_9);
   FUNC_7(VAR_3, VAR_1);
   FUNC_3(VAR_8, 1);
   if (VAR_3->sg.start == VAR_3->sg.end)
    break;
  }
  if (VAR_7 && !VAR_4)
   break;
 }

 return 0;
}
