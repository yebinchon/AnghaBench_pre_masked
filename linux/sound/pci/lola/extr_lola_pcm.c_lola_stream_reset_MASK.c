
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola_stream {int dsd; scalar_t__ prepared; int substream; scalar_t__ paused; } ;
struct lola {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lola*,int ,int ,int) ;
 int FUNC_1 (struct lola*,struct lola_stream*) ;
 int FUNC_2 (struct lola*,struct lola_stream*,int) ;
 int FUNC_3 (struct lola*,int ) ;
 int FUNC_4 (struct lola*,struct lola_stream*) ;

__attribute__((used)) static void FUNC_5(struct lola *VAR_7, struct lola_stream *VAR_8)
{
 if (VAR_8->prepared) {
  if (VAR_8->paused)
   FUNC_3(VAR_7, VAR_8->substream);
  VAR_8->prepared = 0;
  FUNC_0(VAR_7, VAR_8->dsd, VAR_2,
          VAR_4 | VAR_3);
  FUNC_2(VAR_7, VAR_8, 0);
  FUNC_1(VAR_7, VAR_8);
  FUNC_0(VAR_7, VAR_8->dsd, VAR_2, VAR_5);
  FUNC_0(VAR_7, VAR_8->dsd, VAR_6, 0);
  FUNC_0(VAR_7, VAR_8->dsd, VAR_1, 0);
  FUNC_0(VAR_7, VAR_8->dsd, VAR_0, 0);
  FUNC_4(VAR_7, VAR_8);
 }
}
