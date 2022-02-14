
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_4 ;
 struct hlist_head* FUNC_2 (unsigned int,int) ;
 struct hlist_head* FUNC_3 (unsigned int) ;

struct hlist_head *FUNC_4(unsigned int VAR_5)
{
 struct hlist_head *VAR_6;

 if (VAR_5 <= VAR_1)
  VAR_6 = FUNC_2(VAR_5, VAR_0);
 else if (VAR_4)
  VAR_6 = FUNC_3(VAR_5);
 else
  VAR_6 = (struct hlist_head *)
   FUNC_0(VAR_0 | VAR_2 | VAR_3,
      FUNC_1(VAR_5));

 return VAR_6;
}
