
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_lssopt {int change; int flags; int offtime; int maxidle; scalar_t__ minidle; int avpkt; int ewma_log; } ;
struct cbq_class {long minidle; int offtime; int avgidle; int maxidle; int avpkt; int ewma_log; int * tparent; int * borrow; int * share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct cbq_class *VAR_8, struct tc_cbq_lssopt *VAR_9)
{
 if (VAR_9->change & VAR_3) {
  VAR_8->share = (VAR_9->flags & VAR_4) ? ((void*)0) : VAR_8->tparent;
  VAR_8->borrow = (VAR_9->flags & VAR_1) ? ((void*)0) : VAR_8->tparent;
 }
 if (VAR_9->change & VAR_2)
  VAR_8->ewma_log = VAR_9->ewma_log;
 if (VAR_9->change & VAR_0)
  VAR_8->avpkt = VAR_9->avpkt;
 if (VAR_9->change & VAR_6)
  VAR_8->minidle = -(long)VAR_9->minidle;
 if (VAR_9->change & VAR_5) {
  VAR_8->maxidle = VAR_9->maxidle;
  VAR_8->avgidle = VAR_9->maxidle;
 }
 if (VAR_9->change & VAR_7)
  VAR_8->offtime = VAR_9->offtime;
 return 0;
}
