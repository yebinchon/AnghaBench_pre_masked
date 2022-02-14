
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pos; scalar_t__ size; scalar_t__ capacity; TYPE_1__* seq; } ;
typedef TYPE_2__ rawSeqStore_t ;
struct TYPE_18__ {int const* nextSrc; } ;
struct TYPE_16__ {TYPE_5__ window; int hashTable; } ;
typedef TYPE_3__ ldmState_t ;
struct TYPE_17__ {unsigned int windowLog; unsigned int hashLog; } ;
typedef TYPE_4__ ldmParams_t ;
typedef unsigned int U32 ;
struct TYPE_14__ {int litLength; } ;
typedef int BYTE ;


 size_t const VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_4__ const*,int const* const,size_t const) ;
 int FUNC_2 (int ,unsigned int const,unsigned int const) ;
 unsigned int FUNC_3 (TYPE_5__*,int ,unsigned int const,void const*) ;
 int FUNC_4 (TYPE_5__*,int const* const,unsigned int const,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_5__,int const* const) ;
 int FUNC_6 (int) ;

size_t FUNC_7(
        ldmState_t* VAR_1, rawSeqStore_t* VAR_2,
        ldmParams_t const* VAR_3, void const* VAR_4, size_t VAR_5)
{
    U32 const VAR_6 = 1U << VAR_3->windowLog;
    BYTE const* const VAR_7 = (BYTE const*)VAR_4;
    BYTE const* const VAR_8 = VAR_7 + VAR_5;
    size_t const VAR_9 = 1 << 20;
    size_t const VAR_10 = (VAR_5 / VAR_9) + ((VAR_5 % VAR_9) != 0);
    size_t VAR_11;
    size_t VAR_12 = 0;

    FUNC_6(VAR_0 >= VAR_9);



    FUNC_6(VAR_1->window.nextSrc >= (BYTE const*)VAR_4 + VAR_5);



    FUNC_6(VAR_2->pos <= VAR_2->size);
    FUNC_6(VAR_2->size <= VAR_2->capacity);
    for (VAR_11 = 0; VAR_11 < VAR_10 && VAR_2->size < VAR_2->capacity; ++VAR_11) {
        BYTE const* const VAR_13 = VAR_7 + VAR_11 * VAR_9;
        size_t const VAR_14 = (size_t)(VAR_8 - VAR_13);
        BYTE const *const VAR_15 =
            (VAR_14 < VAR_9) ? VAR_8 : VAR_13 + VAR_9;
        size_t const VAR_16 = VAR_15 - VAR_13;
        size_t VAR_17;
        size_t const VAR_18 = VAR_2->size;

        FUNC_6(VAR_13 < VAR_8);

        if (FUNC_5(VAR_1->window, VAR_15)) {
            U32 const VAR_19 = 1U << VAR_3->hashLog;
            U32 const VAR_20 = FUNC_3(
                &VAR_1->window, 0, VAR_6, VAR_4);
            FUNC_2(VAR_1->hashTable, VAR_19, VAR_20);
        }
        FUNC_4(&VAR_1->window, VAR_15, VAR_6, ((void*)0), ((void*)0));

        VAR_17 = FUNC_1(
            VAR_1, VAR_2, VAR_3, VAR_13, VAR_16);
        if (FUNC_0(VAR_17))
            return VAR_17;





        if (VAR_18 < VAR_2->size) {
            VAR_2->seq[VAR_18].litLength += (U32)VAR_12;
            VAR_12 = VAR_17;
        } else {
            FUNC_6(VAR_17 == VAR_16);
            VAR_12 += VAR_16;
        }
    }
    return 0;
}
