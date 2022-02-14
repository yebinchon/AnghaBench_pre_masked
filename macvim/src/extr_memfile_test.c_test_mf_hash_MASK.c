
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mht_count; int mht_mask; scalar_t__ mht_buckets; scalar_t__ mht_small_buckets; } ;
typedef TYPE_1__ mf_hashtab_T ;
struct TYPE_13__ {scalar_t__ mhi_key; } ;
typedef TYPE_2__ mf_hashitem_T ;
typedef int long_u ;
typedef scalar_t__ blocknr_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9()
{
    mf_hashtab_T VAR_5;
    mf_hashitem_T *VAR_6;
    blocknr_T VAR_7;
    long_u VAR_8;
    long_u VAR_9;

    FUNC_6(&VAR_5);


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
 FUNC_0(VAR_5.mht_count == VAR_8);


 VAR_9 = VAR_5.mht_mask + 1;
 FUNC_0(VAR_9 > 0 && (VAR_9 & (VAR_9 - 1)) == 0);


 FUNC_0(VAR_5.mht_count <= (VAR_9 << VAR_3));

 if (VAR_8 < (VAR_2 << VAR_3))
 {

     FUNC_0(VAR_9 == VAR_2);
     FUNC_0(VAR_5.mht_buckets == VAR_5.mht_small_buckets);
 }
 else
 {
     FUNC_0(VAR_9 > VAR_2);
     FUNC_0(VAR_5.mht_buckets != VAR_5.mht_small_buckets);
 }

 VAR_7 = FUNC_1(VAR_8);
 FUNC_0(FUNC_4(&VAR_5, VAR_7) == ((void*)0));


 VAR_6 = (mf_hashitem_T *)FUNC_2(sizeof(mf_hashtab_T), VAR_0);
 FUNC_0(VAR_6 != ((void*)0));
 VAR_6->mhi_key = VAR_7;
 FUNC_3(&VAR_5, VAR_6);

 FUNC_0(FUNC_4(&VAR_5, VAR_7) == VAR_6);

 if (VAR_5.mht_mask + 1 != VAR_9)
 {

     FUNC_0(VAR_5.mht_mask + 1 == VAR_9 * VAR_1);
     FUNC_0(VAR_8 + 1 == (VAR_9 << VAR_3));
 }
    }


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
 VAR_7 = FUNC_1(VAR_8);
 VAR_6 = FUNC_4(&VAR_5, VAR_7);
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_6->mhi_key == VAR_7);
    }


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
 if (VAR_8 % 100 < 70)
 {
     VAR_7 = FUNC_1(VAR_8);
     VAR_6 = FUNC_4(&VAR_5, VAR_7);
     FUNC_0(VAR_6 != ((void*)0));
     FUNC_0(VAR_6->mhi_key == VAR_7);

     FUNC_7(&VAR_5, VAR_6);
     FUNC_0(FUNC_4(&VAR_5, VAR_7) == ((void*)0));

     FUNC_3(&VAR_5, VAR_6);
     FUNC_0(FUNC_4(&VAR_5, VAR_7) == VAR_6);

     FUNC_7(&VAR_5, VAR_6);
     FUNC_0(FUNC_4(&VAR_5, VAR_7) == ((void*)0));

     FUNC_8(VAR_6);
 }
    }


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
 VAR_7 = FUNC_1(VAR_8);
 VAR_6 = FUNC_4(&VAR_5, VAR_7);

 if (VAR_8 % 100 < 70)
 {
     FUNC_0(VAR_6 == ((void*)0));
 }
 else
 {
     FUNC_0(VAR_6 != ((void*)0));
     FUNC_0(VAR_6->mhi_key == VAR_7);
 }
    }


    FUNC_5(&VAR_5);
}
