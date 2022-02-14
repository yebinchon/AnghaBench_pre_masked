
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int last_lit; unsigned int* d_buf; int* l_buf; scalar_t__ pending; scalar_t__ lit_bufsize; int last_eob_len; } ;
typedef TYPE_1__ deflate_state ;
struct TYPE_10__ {int Len; } ;
typedef TYPE_2__ ct_data ;


 int FUNC_0 (int,char*) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 unsigned int FUNC_2 (unsigned int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_3 (int) ;
 unsigned int* VAR_7 ;
 int FUNC_4 (TYPE_1__*,unsigned int,int) ;
 int FUNC_5 (TYPE_1__*,size_t,TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(
 deflate_state *VAR_9,
 ct_data *VAR_10,
 ct_data *VAR_11
)
{
    unsigned VAR_12;
    int VAR_13;
    unsigned VAR_14 = 0;
    unsigned VAR_15;
    int VAR_16;

    if (VAR_9->last_lit != 0) do {
        VAR_12 = VAR_9->d_buf[VAR_14];
        VAR_13 = VAR_9->l_buf[VAR_14++];
        if (VAR_12 == 0) {
            FUNC_5(VAR_9, VAR_13, VAR_10);
            FUNC_1(FUNC_3(VAR_13), (VAR_8," '%c' ", VAR_13));
        } else {

            VAR_15 = VAR_7[VAR_13];
            FUNC_5(VAR_9, VAR_15+VAR_2+1, VAR_10);
            VAR_16 = VAR_6[VAR_15];
            if (VAR_16 != 0) {
                VAR_13 -= VAR_4[VAR_15];
                FUNC_4(VAR_9, VAR_13, VAR_16);
            }
            VAR_12--;
            VAR_15 = FUNC_2(VAR_12);
            FUNC_0 (VAR_15 < VAR_0, "bad d_code");

            FUNC_5(VAR_9, VAR_15, VAR_11);
            VAR_16 = VAR_5[VAR_15];
            if (VAR_16 != 0) {
                VAR_12 -= VAR_3[VAR_15];
                FUNC_4(VAR_9, VAR_12, VAR_16);
            }
        }


        FUNC_0(VAR_9->pending < VAR_9->lit_bufsize + 2*VAR_14, "pendingBuf overflow");

    } while (VAR_14 < VAR_9->last_lit);

    FUNC_5(VAR_9, VAR_1, VAR_10);
    VAR_9->last_eob_len = VAR_10[VAR_1].Len;
}
