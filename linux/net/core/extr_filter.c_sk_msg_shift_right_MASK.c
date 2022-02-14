
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; struct scatterlist* data; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 struct scatterlist FUNC_0 (struct sk_msg*,int) ;
 int FUNC_1 (struct sk_msg*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct sk_msg *VAR_1, int VAR_2)
{
 struct scatterlist VAR_3, VAR_4;

 FUNC_1(VAR_1, VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 while (VAR_2 != VAR_1->sg.end) {
  VAR_1->sg.data[VAR_2] = VAR_4;
  FUNC_2(VAR_2);
  VAR_4 = VAR_3;
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 }
}
