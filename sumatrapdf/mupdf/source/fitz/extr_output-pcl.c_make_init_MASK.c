
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int media_position; scalar_t__ media_position_set; scalar_t__ manual_feed; scalar_t__ manual_feed_set; } ;
typedef TYPE_1__ fz_pcl_options ;
typedef int buf2 ;


 int FUNC_0 (char*,int,char const*,int) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_2(fz_pcl_options *VAR_0, char *VAR_1, unsigned long VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = -1;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_0->manual_feed_set && VAR_0->manual_feed)
  VAR_5 = 2;
 else if (VAR_0->media_position_set && VAR_0->media_position >= 0)
  VAR_5 = VAR_0->media_position;
 if (VAR_5 >= 0)
 {
  char VAR_6[40];
  FUNC_0(VAR_6, sizeof(VAR_6), "\033&l%dH", VAR_5);
  FUNC_1(VAR_1, VAR_6, VAR_2);
 }
}
