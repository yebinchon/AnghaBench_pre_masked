
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef size_t ut32 ;
struct r_magic {int flag; scalar_t__ cont_level; int offset; char reln; scalar_t__ cond; int type; int lineno; } ;
struct TYPE_12__ {TYPE_1__* li; } ;
struct TYPE_13__ {int offset; int flags; TYPE_2__ c; int line; } ;
struct TYPE_11__ {int off; int last_match; int got_match; } ;
typedef TYPE_3__ RMagic ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 (TYPE_3__*,unsigned int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,struct r_magic*) ;
 int FUNC_3 (TYPE_3__*,int const*,struct r_magic*,size_t,unsigned int) ;
 int FUNC_4 (TYPE_3__*,struct r_magic*) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(RMagic *VAR_8, struct r_magic *VAR_9, ut32 VAR_10, const ut8 *VAR_11, size_t VAR_12, int VAR_13) {
 ut32 VAR_14 = 0;
 unsigned int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 1;
 int VAR_19 = 0;

 if (FUNC_0 (VAR_8, VAR_15) == -1) {
  return -1;
 }
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  int VAR_20;
  struct r_magic *VAR_21 = &VAR_9[VAR_14];

  if ((VAR_21->flag & VAR_0) != VAR_13) {

   while (VAR_9[VAR_14 + 1].cont_level != 0 && ++VAR_14 < VAR_10 - 1) {
    continue;
   }
   continue;
  }

  VAR_8->offset = VAR_21->offset;
  VAR_8->line = VAR_21->lineno;


  VAR_20 = !FUNC_3(VAR_8, VAR_11, VAR_21, VAR_12, VAR_15);
  if (VAR_20) {
   if (VAR_21->reln == '!') {
    VAR_20 = 0;
   }
  } else {
   int VAR_22 = FUNC_2 (VAR_8, VAR_21);
   if (VAR_22 == -1) {
    return -1;
   }
   if (!VAR_22) {
    VAR_20++;
   }
  }
  if (VAR_20) {




   while (VAR_14 < VAR_10 - 1 && VAR_9[VAR_14 + 1].cont_level) {
    VAR_14++;
   }
   continue;
  }





  if (*VAR_7) {
   VAR_16 = 1;
   VAR_19 = 1;
   if (FUNC_5 (VAR_8, VAR_18) == -1) {
    return -1;
   }
  }

  if ((VAR_8->c.li[VAR_15].off = FUNC_4 (VAR_8, VAR_21)) == -1) {
   return -1;
  }


  if (FUNC_0(VAR_8, ++VAR_15) == -1) {
   return -1;
  }

  while (++VAR_14 < VAR_10 - 1 && VAR_9[VAR_14].cont_level != 0) {
   VAR_21 = &VAR_9[VAR_14];
   VAR_8->line = VAR_21->lineno;

   if (VAR_15 < VAR_21->cont_level) {
    continue;
   }
   if (VAR_15 > VAR_21->cont_level) {




    VAR_15 = VAR_21->cont_level;
   }
   VAR_8->offset = VAR_21->offset;
   if (VAR_21->flag & VAR_5) {
    VAR_8->offset += VAR_8->c.li[VAR_15 - 1].off;
   }

   if (VAR_21->cond == VAR_2 || VAR_21->cond == VAR_1) {
    if (VAR_8->c.li[VAR_15].last_match == 1) {
     continue;
    }
   }
   VAR_20 = !FUNC_3(VAR_8, VAR_11, VAR_21, VAR_12, VAR_15);
   if (VAR_20 && VAR_21->reln != '!') {
    continue;
   }

   switch (VAR_20 ? 1 : FUNC_2(VAR_8, VAR_21)) {
   case -1:
    return -1;
   case 0:
    VAR_8->c.li[VAR_15].last_match = 0;
    break;
   default:
    VAR_8->c.li[VAR_15].last_match = 1;
    if (VAR_21->type != VAR_3) {
     VAR_8->c.li[VAR_15].got_match = 1;
    } else if (VAR_8->c.li[VAR_15].got_match) {
     VAR_8->c.li[VAR_15].got_match = 0;
     break;
    }




    if (*VAR_7) {
     VAR_19 = 1;
     if (FUNC_5 (VAR_8, VAR_18) == -1) {
      return -1;
     }
    }







    if (VAR_16
        && ((VAR_21->flag & VAR_4) == 0)
        && *VAR_7) {
     if (FUNC_1 (VAR_8, " ") == -1) {
      return -1;
     }
     VAR_16 = 0;
    }
    if ((VAR_8->c.li[VAR_15].off = FUNC_4 (VAR_8, VAR_21)) == -1) {
     return -1;
    }
    if (*VAR_7) {
     VAR_16 = 1;
    }






    if (FUNC_0 (VAR_8, ++VAR_15) == -1) {
     return -1;
    }
    break;
   }
  }
  if (VAR_19) {
   VAR_18 = 0;
   VAR_17 = 1;
  }
  if ((VAR_8->flags & VAR_6) == 0 && VAR_19) {
   return 1;
  }
 }
 return VAR_17;
}
