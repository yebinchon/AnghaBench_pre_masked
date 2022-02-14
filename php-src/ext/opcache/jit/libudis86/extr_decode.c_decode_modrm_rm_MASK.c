
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {scalar_t__ base; scalar_t__ index; unsigned int scale; scalar_t__ offset; int size; int type; } ;
struct ud {int adr_mode; int pfx_rex; int _rex; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned int const VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int const VAR_13 ;
 int FUNC_7 (struct ud*,size_t,struct ud_operand*) ;
 int FUNC_8 (struct ud*,struct ud_operand*,unsigned char,unsigned char,unsigned int) ;
 int FUNC_9 (struct ud*) ;
 int FUNC_10 (struct ud*) ;
 int FUNC_11 (struct ud*) ;
 int FUNC_12 (struct ud*,unsigned int) ;

__attribute__((used)) static void
FUNC_13(struct ud *VAR_14,
                struct ud_operand *VAR_15,
                unsigned char VAR_16,
                unsigned int VAR_17)

{
  size_t VAR_18 = 0;
  unsigned char VAR_19, VAR_20;


  VAR_19 = FUNC_0(FUNC_11(VAR_14));
  VAR_20 = (FUNC_2(VAR_14->_rex) << 3) | FUNC_1(FUNC_11(VAR_14));





  if (VAR_19 == 3) {
    FUNC_8(VAR_14, VAR_15, VAR_16, VAR_20, VAR_17);
    return;
  }




  VAR_15->type = VAR_1;
  VAR_15->size = FUNC_12(VAR_14, VAR_17);

  if (VAR_14->adr_mode == 64) {
    VAR_15->base = VAR_9 + VAR_20;
    if (VAR_19 == 1) {
      VAR_18 = 8;
    } else if (VAR_19 == 2) {
      VAR_18 = 32;
    } else if (VAR_19 == 0 && (VAR_20 & 7) == 5) {
      VAR_15->base = VAR_11;
      VAR_18 = 32;
    } else {
      VAR_18 = 0;
    }



    if ((VAR_20 & 7) == 4) {
      FUNC_10(VAR_14);

      VAR_15->base = VAR_9 + (FUNC_4(FUNC_9(VAR_14)) | (FUNC_2(VAR_14->_rex) << 3));
      VAR_15->index = VAR_9 + (FUNC_5(FUNC_9(VAR_14)) | (FUNC_3(VAR_14->_rex) << 3));

      if (VAR_15->index == VAR_12) {
        VAR_15->index = VAR_0;
        VAR_15->scale = VAR_0;
      } else {
        VAR_15->scale = (1 << FUNC_6(FUNC_9(VAR_14))) & ~1;
      }

      if (VAR_15->base == VAR_10 || VAR_15->base == VAR_8) {
        if (VAR_19 == 0) {
          VAR_15->base = VAR_0;
        }
        if (VAR_19 == 1) {
          VAR_18 = 8;
        } else {
          VAR_18 = 32;
        }
      }
    } else {
        VAR_15->scale = VAR_0;
        VAR_15->index = VAR_0;
    }
  } else if (VAR_14->adr_mode == 32) {
    VAR_15->base = VAR_5 + VAR_20;
    if (VAR_19 == 1) {
      VAR_18 = 8;
    } else if (VAR_19 == 2) {
      VAR_18 = 32;
    } else if (VAR_19 == 0 && VAR_20 == 5) {
      VAR_15->base = VAR_0;
      VAR_18 = 32;
    } else {
      VAR_18 = 0;
    }


    if ((VAR_20 & 7) == 4) {
      FUNC_10(VAR_14);

      VAR_15->scale = (1 << FUNC_6(FUNC_9(VAR_14))) & ~1;
      VAR_15->index = VAR_5 + (FUNC_5(FUNC_9(VAR_14)) | (FUNC_3(VAR_14->pfx_rex) << 3));
      VAR_15->base = VAR_5 + (FUNC_4(FUNC_9(VAR_14)) | (FUNC_2(VAR_14->pfx_rex) << 3));

      if (VAR_15->index == VAR_7) {
        VAR_15->index = VAR_0;
        VAR_15->scale = VAR_0;
      }


      if (VAR_15->base == VAR_6) {
        if (VAR_19 == 0) {
          VAR_15->base = VAR_0;
        }
        if (VAR_19 == 1) {
          VAR_18 = 8;
        } else {
          VAR_18 = 32;
        }
      }
    } else {
      VAR_15->scale = VAR_0;
      VAR_15->index = VAR_0;
    }
  } else {
    const unsigned int VAR_21[] = { VAR_3, VAR_3, VAR_2, VAR_2,
                                     VAR_13, VAR_4, VAR_2, VAR_3 };
    const unsigned int VAR_22[] = { VAR_13, VAR_4, VAR_13, VAR_4,
                                     VAR_0, VAR_0, VAR_0, VAR_0 };
    VAR_15->base = VAR_21[VAR_20 & 7];
    VAR_15->index = VAR_22[VAR_20 & 7];
    VAR_15->scale = VAR_0;
    if (VAR_19 == 0 && VAR_20 == 6) {
      VAR_18 = 16;
      VAR_15->base = VAR_0;
    } else if (VAR_19 == 1) {
      VAR_18 = 8;
    } else if (VAR_19 == 2) {
      VAR_18 = 16;
    }
  }

  if (VAR_18) {
    FUNC_7(VAR_14, VAR_18, VAR_15);
  } else {
    VAR_15->offset = 0;
  }
}
