
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char operstate; } ;
struct hsr_priv {int announce_timer; scalar_t__ announce_count; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct hsr_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
          unsigned char VAR_4)
{
 struct hsr_priv *VAR_5;

 VAR_5 = FUNC_3(VAR_3);

 if (VAR_3->operstate == VAR_1 && VAR_4 != VAR_1) {

  VAR_5->announce_count = 0;
  FUNC_1(&VAR_5->announce_timer,
     VAR_2 + FUNC_2(VAR_0));
 }

 if (VAR_3->operstate != VAR_1 && VAR_4 == VAR_1)

  FUNC_0(&VAR_5->announce_timer);
}
