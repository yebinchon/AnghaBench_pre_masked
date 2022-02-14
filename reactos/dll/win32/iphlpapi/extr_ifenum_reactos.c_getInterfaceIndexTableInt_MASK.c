
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int tei_instance; int tei_entity; } ;
struct TYPE_9__ {int if_index; } ;
struct TYPE_10__ {TYPE_1__ ent; } ;
struct TYPE_12__ {TYPE_2__ if_info; TYPE_6__ entity_id; } ;
struct TYPE_11__ {int numAllocated; int numIndexes; int * indexes; } ;
typedef int NTSTATUS ;
typedef TYPE_3__ InterfaceIndexTable ;
typedef TYPE_4__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__**,int*) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_4__*) ;

InterfaceIndexTable *FUNC_8( BOOL VAR_1 ) {
  DWORD VAR_2, VAR_3 = 0;
  int VAR_4;
  IFInfo *VAR_5;
  InterfaceIndexTable *VAR_6 = 0;
  HANDLE VAR_7;
  NTSTATUS VAR_8 = FUNC_6( &VAR_7, VAR_0 );

  if( FUNC_0(VAR_8) ) {
      VAR_8 = FUNC_4( VAR_7, &VAR_5, &VAR_2 );

      FUNC_1("InterfaceInfoSet: %08x, %04x:%08x\n",
             VAR_8,
             VAR_5->entity_id.tei_entity,
             VAR_5->entity_id.tei_instance);

      if( FUNC_0(VAR_8) ) {
          VAR_6 = (InterfaceIndexTable *)
              FUNC_2(1,
                     sizeof(InterfaceIndexTable) +
                     (VAR_2 - 1) * sizeof(DWORD));

          if (VAR_6) {
              VAR_6->numAllocated = VAR_2;
              FUNC_1("NumInterfaces = %d\n", VAR_2);

              for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ ) {
                  FUNC_1("Examining interface %d\n", VAR_4);
                  if( !VAR_1 ||
                      !FUNC_5( VAR_7, &VAR_5[VAR_4].entity_id ) ) {
                      FUNC_1("Interface %d matches (%d)\n", VAR_4, VAR_3);
                      VAR_6->indexes[VAR_3++] =
                          VAR_5[VAR_4].if_info.ent.if_index;
                  }
              }

              VAR_6->numIndexes = VAR_3;
          }

          FUNC_7( VAR_5 );
      }
      FUNC_3( VAR_7 );
  }

  return VAR_6;
}
