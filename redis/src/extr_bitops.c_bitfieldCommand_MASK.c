
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef long long uint64_t ;
struct bitfieldOp {size_t offset; long long i64; int opcode; int owtype; int bits; int sign; } ;
struct TYPE_28__ {unsigned char* ptr; } ;
typedef TYPE_1__ robj ;
typedef long long int64_t ;
struct TYPE_29__ {int argc; TYPE_3__* db; TYPE_4__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_33__ {int dirty; } ;
struct TYPE_32__ {int syntaxerr; } ;
struct TYPE_31__ {char* ptr; } ;
struct TYPE_30__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,long long) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (long long,long long,int,int,long long*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_7 (long long,long long,int,int,long long*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_4__*,size_t*,int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_4__*,int*,int*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_4__*,long long*,int *) ;
 unsigned char* FUNC_11 (TYPE_1__*,long*,char*) ;
 long long FUNC_12 (unsigned char*,size_t,int) ;
 long long FUNC_13 (unsigned char*,size_t,int) ;
 TYPE_1__* FUNC_14 (TYPE_3__*,TYPE_4__*) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,size_t) ;
 int FUNC_16 (unsigned char*,int ,int) ;
 int FUNC_17 (int ,char*,TYPE_4__*,int ) ;
 TYPE_6__ VAR_10 ;
 int FUNC_18 (unsigned char*,size_t,int,long long) ;
 int FUNC_19 (unsigned char*,size_t,int,long long) ;
 TYPE_5__ VAR_11 ;
 int FUNC_20 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (struct bitfieldOp*) ;
 struct bitfieldOp* FUNC_23 (struct bitfieldOp*,int) ;

void FUNC_24(client *VAR_12) {
    robj *VAR_13;
    size_t VAR_14;
    int VAR_15, VAR_16 = 0, VAR_17 = 0;
    struct bitfieldOp *VAR_18 = ((void*)0);
    int VAR_19 = VAR_2;
    int VAR_20 = 1;
    size_t VAR_21 = 0;

    for (VAR_15 = 2; VAR_15 < VAR_12->argc; VAR_15++) {
        int VAR_22 = VAR_12->argc-VAR_15-1;
        char *VAR_23 = VAR_12->argv[VAR_15]->ptr;
        int VAR_24;
        long long VAR_25 = 0;
        int VAR_26 = 0;
        int VAR_27 = 0;

        if (!FUNC_21(VAR_23,"get") && VAR_22 >= 2)
            VAR_24 = VAR_3;
        else if (!FUNC_21(VAR_23,"set") && VAR_22 >= 3)
            VAR_24 = VAR_5;
        else if (!FUNC_21(VAR_23,"incrby") && VAR_22 >= 3)
            VAR_24 = VAR_4;
        else if (!FUNC_21(VAR_23,"overflow") && VAR_22 >= 1) {
            char *VAR_28 = VAR_12->argv[VAR_15+1]->ptr;
            VAR_15++;
            if (!FUNC_21(VAR_28,"wrap"))
                VAR_19 = VAR_2;
            else if (!FUNC_21(VAR_28,"sat"))
                VAR_19 = VAR_1;
            else if (!FUNC_21(VAR_28,"fail"))
                VAR_19 = VAR_0;
            else {
                FUNC_2(VAR_12,"Invalid OVERFLOW type specified");
                FUNC_22(VAR_18);
                return;
            }
            continue;
        } else {
            FUNC_0(VAR_12,VAR_11.syntaxerr);
            FUNC_22(VAR_18);
            return;
        }


        if (FUNC_9(VAR_12,VAR_12->argv[VAR_15+1],&VAR_26,&VAR_27) != VAR_6) {
            FUNC_22(VAR_18);
            return;
        }

        if (FUNC_8(VAR_12,VAR_12->argv[VAR_15+2],&VAR_14,1,VAR_27) != VAR_6){
            FUNC_22(VAR_18);
            return;
        }

        if (VAR_24 != VAR_3) {
            VAR_20 = 0;
            if (VAR_21 < VAR_14 + VAR_27 - 1)
                VAR_21 = VAR_14 + VAR_27 - 1;

            if (FUNC_10(VAR_12,VAR_12->argv[VAR_15+3],&VAR_25,((void*)0)) != VAR_6){
                FUNC_22(VAR_18);
                return;
            }
        }


        VAR_18 = FUNC_23(VAR_18,sizeof(*VAR_18)*(VAR_16+1));
        VAR_18[VAR_16].offset = VAR_14;
        VAR_18[VAR_16].i64 = VAR_25;
        VAR_18[VAR_16].opcode = VAR_24;
        VAR_18[VAR_16].owtype = VAR_19;
        VAR_18[VAR_16].bits = VAR_27;
        VAR_18[VAR_16].sign = VAR_26;
        VAR_16++;

        VAR_15 += 3 - (VAR_24 == VAR_3);
    }

    if (VAR_20) {


        VAR_13 = FUNC_14(VAR_12->db,VAR_12->argv[1]);
        if (VAR_13 != ((void*)0) && FUNC_6(VAR_12,VAR_13,VAR_9)) {
            FUNC_22(VAR_18);
            return;
        }
    } else {


        if ((VAR_13 = FUNC_15(VAR_12,
            VAR_21)) == ((void*)0)) {
            FUNC_22(VAR_18);
            return;
        }
    }

    FUNC_1(VAR_12,VAR_16);


    for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
        struct bitfieldOp *VAR_29 = VAR_18+VAR_15;


        if (VAR_29->opcode == VAR_5 ||
            VAR_29->opcode == VAR_4)
        {







            if (VAR_29->sign) {
                int64_t VAR_30, VAR_31, VAR_32, VAR_33;
                int VAR_34;

                VAR_30 = FUNC_12(VAR_13->ptr,VAR_29->offset,
                        VAR_29->bits);

                if (VAR_29->opcode == VAR_4) {
                    VAR_31 = VAR_30 + VAR_29->i64;
                    VAR_34 = FUNC_5(VAR_30,
                            VAR_29->i64,VAR_29->bits,VAR_29->owtype,&VAR_32);
                    if (VAR_34) VAR_31 = VAR_32;
                    VAR_33 = VAR_31;
                } else {
                    VAR_31 = VAR_29->i64;
                    VAR_34 = FUNC_5(VAR_31,
                            0,VAR_29->bits,VAR_29->owtype,&VAR_32);
                    if (VAR_34) VAR_31 = VAR_32;
                    VAR_33 = VAR_30;
                }



                if (!(VAR_34 && VAR_29->owtype == VAR_0)) {
                    FUNC_3(VAR_12,VAR_33);
                    FUNC_18(VAR_13->ptr,VAR_29->offset,
                                      VAR_29->bits,VAR_31);
                } else {
                    FUNC_4(VAR_12);
                }
            } else {
                uint64_t VAR_35, VAR_36, VAR_37, VAR_38;
                int VAR_39;

                VAR_35 = FUNC_13(VAR_13->ptr,VAR_29->offset,
                        VAR_29->bits);

                if (VAR_29->opcode == VAR_4) {
                    VAR_36 = VAR_35 + VAR_29->i64;
                    VAR_39 = FUNC_7(VAR_35,
                            VAR_29->i64,VAR_29->bits,VAR_29->owtype,&VAR_37);
                    if (VAR_39) VAR_36 = VAR_37;
                    VAR_38 = VAR_36;
                } else {
                    VAR_36 = VAR_29->i64;
                    VAR_39 = FUNC_7(VAR_36,
                            0,VAR_29->bits,VAR_29->owtype,&VAR_37);
                    if (VAR_39) VAR_36 = VAR_37;
                    VAR_38 = VAR_35;
                }


                if (!(VAR_39 && VAR_29->owtype == VAR_0)) {
                    FUNC_3(VAR_12,VAR_38);
                    FUNC_19(VAR_13->ptr,VAR_29->offset,
                                        VAR_29->bits,VAR_36);
                } else {
                    FUNC_4(VAR_12);
                }
            }
            VAR_17++;
        } else {

            unsigned char VAR_40[9];
            long VAR_41 = 0;
            unsigned char *VAR_42 = ((void*)0);
            char VAR_43[VAR_7];

            if (VAR_13 != ((void*)0))
                VAR_42 = FUNC_11(VAR_13,&VAR_41,VAR_43);





            FUNC_16(VAR_40,0,9);
            int VAR_44;
            size_t VAR_45 = VAR_29->offset >> 3;
            for (VAR_44 = 0; VAR_44 < 9; VAR_44++) {
                if (VAR_42 == ((void*)0) || VAR_44+VAR_45 >= (size_t)VAR_41) break;
                VAR_40[VAR_44] = VAR_42[VAR_44+VAR_45];
            }



            if (VAR_29->sign) {
                int64_t VAR_46 = FUNC_12(VAR_40,VAR_29->offset-(VAR_45*8),
                                            VAR_29->bits);
                FUNC_3(VAR_12,VAR_46);
            } else {
                uint64_t VAR_47 = FUNC_13(VAR_40,VAR_29->offset-(VAR_45*8),
                                            VAR_29->bits);
                FUNC_3(VAR_12,VAR_47);
            }
        }
    }

    if (VAR_17) {
        FUNC_20(VAR_12->db,VAR_12->argv[1]);
        FUNC_17(VAR_8,"setbit",VAR_12->argv[1],VAR_12->db->id);
        VAR_10.dirty += VAR_17;
    }
    FUNC_22(VAR_18);
}
