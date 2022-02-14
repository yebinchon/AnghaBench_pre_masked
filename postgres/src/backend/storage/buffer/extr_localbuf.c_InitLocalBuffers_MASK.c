
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
typedef int info ;
struct TYPE_8__ {int buf_id; } ;
struct TYPE_7__ {int keysize; int entrysize; } ;
typedef int LocalBufferLookupEnt ;
typedef TYPE_1__ HASHCTL ;
typedef int BufferTag ;
typedef TYPE_2__ BufferDesc ;
typedef int Block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int VAR_6 ;
 int * VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,TYPE_1__*,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_13 = VAR_12;
 HASHCTL VAR_14;
 int VAR_15;
 if (FUNC_1())
  FUNC_5(VAR_2,
    (FUNC_6(VAR_0),
     FUNC_7("cannot access temporary tables during a parallel operation")));


 VAR_8 = (BufferDesc *) FUNC_3(VAR_13, sizeof(BufferDesc));
 VAR_7 = (Block *) FUNC_3(VAR_13, sizeof(Block));
 VAR_9 = (int32 *) FUNC_3(VAR_13, sizeof(int32));
 if (!VAR_8 || !VAR_7 || !VAR_9)
  FUNC_5(VAR_3,
    (FUNC_6(VAR_1),
     FUNC_7("out of memory")));

 VAR_11 = 0;


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
 {
  BufferDesc *VAR_16 = FUNC_0(VAR_15);







  VAR_16->buf_id = -VAR_15 - 2;







 }


 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.keysize = sizeof(BufferTag);
 VAR_14.entrysize = sizeof(LocalBufferLookupEnt);

 VAR_6 = FUNC_8("Local Buffer Lookup Table",
          VAR_13,
          &VAR_14,
          VAR_5 | VAR_4);

 if (!VAR_6)
  FUNC_4(VAR_2, "could not initialize local buffer hash table");


 VAR_10 = VAR_13;
}
