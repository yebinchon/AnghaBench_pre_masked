
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int var_t ;
struct TYPE_22__ {char* name; } ;
typedef TYPE_2__ type_t ;
struct TYPE_23__ {int ** typelib_segment_data; TYPE_1__* typelib_segdir; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_21__ {int length; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*,size_t,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int,TYPE_2__*,int*,int*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(
 msft_typelib_t *VAR_9,
 type_t *VAR_10,
 var_t *VAR_11,
 int *VAR_12,
 int *VAR_13)
{
    int VAR_14;
    int *VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19;

    if (!VAR_13) VAR_13 = &VAR_19;
    *VAR_13 = 0;

    FUNC_0("encode_var: var %p type %p type->name %s\n",
         VAR_11, VAR_10, VAR_10->name ? VAR_10->name : "NULL");

    if (FUNC_5(VAR_10) && !FUNC_10(VAR_10)) {
        int VAR_20, VAR_21 = 1, VAR_22;
        type_t *VAR_23;
        int *VAR_24;

        VAR_20 = 0;
        for (VAR_23 = VAR_10;
             FUNC_5(VAR_23) && !FUNC_10(VAR_23);
             VAR_23 = FUNC_9(VAR_23))
            ++VAR_20;

        FUNC_0("array with %d dimensions\n", VAR_20);
        FUNC_12(VAR_9, VAR_23, VAR_11, &VAR_16, ((void*)0));
        VAR_22 = FUNC_1(VAR_9, VAR_0, (2 + 2 * VAR_20) * sizeof(int), 0);
        VAR_24 = (void *)&VAR_9->typelib_segment_data[VAR_0][VAR_22];

        VAR_24[0] = VAR_16;
        VAR_24[1] = VAR_20;
        VAR_24[1] |= ((VAR_20 * 2 * sizeof(int)) << 16);

        VAR_24 += 2;
        for (VAR_23 = VAR_10;
             FUNC_5(VAR_23) && !FUNC_10(VAR_23);
             VAR_23 = FUNC_9(VAR_23))
        {
            VAR_24[0] = FUNC_8(VAR_23);
            VAR_24[1] = 0;
            VAR_24 += 2;
            VAR_21 *= FUNC_8(VAR_23);
        }

        VAR_14 = FUNC_1(VAR_9, VAR_1, 8, 0);
        VAR_15 = (void *)&VAR_9->typelib_segment_data[VAR_1][VAR_14];

        VAR_15[0] = (0x7ffe << 16) | VAR_4;
        VAR_15[1] = VAR_22;

        *VAR_12 = VAR_14;
        *VAR_13 = 20 + (VAR_20 - 1) * 8 ;
        return 0;
    }

    VAR_18 = FUNC_4(VAR_10);
    if (VAR_18 == VAR_6) {
        type_t *VAR_25 = FUNC_6(VAR_10) ?
            FUNC_11(VAR_10) : FUNC_9(VAR_10);
        int VAR_26 = FUNC_12(VAR_9, VAR_25, VAR_11, &VAR_16, &VAR_17);

        if(VAR_26 == 2) {
            FUNC_0("encode_var: skipping ptr\n");
            *VAR_12 = VAR_16;
            *VAR_13 = VAR_17;
            return 0;
        }

 for (VAR_14 = 0; VAR_14 < VAR_9->typelib_segdir[VAR_1].length; VAR_14 += 8) {
     VAR_15 = (void *)&VAR_9->typelib_segment_data[VAR_1][VAR_14];
     if (((VAR_15[0] & 0xffff) == VAR_6) && (VAR_15[1] == VAR_16)) break;
 }

 if (VAR_14 == VAR_9->typelib_segdir[VAR_1].length) {
     int VAR_27;

     if (VAR_16 & 0x80000000) {
  VAR_27 = ((VAR_16 >> 16) & 0x3fff) | VAR_3;
     } else if (FUNC_4(VAR_25) == VAR_7) {
  type_t *VAR_28 = FUNC_7(FUNC_9(VAR_25));
  VAR_27 = FUNC_4(VAR_28) | VAR_2 | VAR_3;
     } else {
  VAR_15 = (void *)&VAR_9->typelib_segment_data[VAR_1][VAR_16];
  VAR_27 = ((VAR_15[0] >> 16) == 0x7fff)? 0x7fff: 0x7ffe;
     }

     VAR_14 = FUNC_1(VAR_9, VAR_1, 8, 0);
     VAR_15 = (void *)&VAR_9->typelib_segment_data[VAR_1][VAR_14];

     VAR_15[0] = (VAR_27 << 16) | VAR_6;
     VAR_15[1] = VAR_16;
 }

 *VAR_12 = VAR_14;

 *VAR_13 = 8 + VAR_17;
        return 0;
    }

    FUNC_2(VAR_10);

    FUNC_3(VAR_9, VAR_18, VAR_10, VAR_12, VAR_13);


    if(VAR_18 == VAR_5 || VAR_18 == VAR_8) return 2;
    return 0;
}
