
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int relopt_gen ;
struct TYPE_11__ {scalar_t__ name; void* namelen; int type; int lockmode; } ;
struct TYPE_15__ {TYPE_2__ gen; } ;
struct TYPE_14__ {TYPE_2__ gen; } ;
struct TYPE_13__ {TYPE_2__ gen; } ;
struct TYPE_12__ {TYPE_2__ gen; } ;
struct TYPE_10__ {TYPE_2__ gen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__** FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_2__** VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_3__* VAR_12 ;
 TYPE_2__** VAR_13 ;
 TYPE_1__* VAR_14 ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_15;
 int VAR_16;

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_6[VAR_15].gen.name; VAR_15++)
 {
  FUNC_0(FUNC_1(VAR_6[VAR_15].gen.lockmode,
           VAR_6[VAR_15].gen.lockmode));
  VAR_16++;
 }
 for (VAR_15 = 0; VAR_9[VAR_15].gen.name; VAR_15++)
 {
  FUNC_0(FUNC_1(VAR_9[VAR_15].gen.lockmode,
           VAR_9[VAR_15].gen.lockmode));
  VAR_16++;
 }
 for (VAR_15 = 0; VAR_12[VAR_15].gen.name; VAR_15++)
 {
  FUNC_0(FUNC_1(VAR_12[VAR_15].gen.lockmode,
           VAR_12[VAR_15].gen.lockmode));
  VAR_16++;
 }
 for (VAR_15 = 0; VAR_8[VAR_15].gen.name; VAR_15++)
 {
  FUNC_0(FUNC_1(VAR_8[VAR_15].gen.lockmode,
           VAR_8[VAR_15].gen.lockmode));
  VAR_16++;
 }
 for (VAR_15 = 0; VAR_14[VAR_15].gen.name; VAR_15++)
 {
  FUNC_0(FUNC_1(VAR_14[VAR_15].gen.lockmode,
           VAR_14[VAR_15].gen.lockmode));
  VAR_16++;
 }
 VAR_16 += VAR_11;

 if (VAR_13)
  FUNC_3(VAR_13);
 VAR_13 = FUNC_2(VAR_5,
         (VAR_16 + 1) * sizeof(relopt_gen *));

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_6[VAR_15].gen.name; VAR_15++)
 {
  VAR_13[VAR_16] = &VAR_6[VAR_15].gen;
  VAR_13[VAR_16]->type = VAR_0;
  VAR_13[VAR_16]->namelen = FUNC_4(VAR_13[VAR_16]->name);
  VAR_16++;
 }

 for (VAR_15 = 0; VAR_9[VAR_15].gen.name; VAR_15++)
 {
  VAR_13[VAR_16] = &VAR_9[VAR_15].gen;
  VAR_13[VAR_16]->type = VAR_2;
  VAR_13[VAR_16]->namelen = FUNC_4(VAR_13[VAR_16]->name);
  VAR_16++;
 }

 for (VAR_15 = 0; VAR_12[VAR_15].gen.name; VAR_15++)
 {
  VAR_13[VAR_16] = &VAR_12[VAR_15].gen;
  VAR_13[VAR_16]->type = VAR_3;
  VAR_13[VAR_16]->namelen = FUNC_4(VAR_13[VAR_16]->name);
  VAR_16++;
 }

 for (VAR_15 = 0; VAR_8[VAR_15].gen.name; VAR_15++)
 {
  VAR_13[VAR_16] = &VAR_8[VAR_15].gen;
  VAR_13[VAR_16]->type = VAR_1;
  VAR_13[VAR_16]->namelen = FUNC_4(VAR_13[VAR_16]->name);
  VAR_16++;
 }

 for (VAR_15 = 0; VAR_14[VAR_15].gen.name; VAR_15++)
 {
  VAR_13[VAR_16] = &VAR_14[VAR_15].gen;
  VAR_13[VAR_16]->type = VAR_4;
  VAR_13[VAR_16]->namelen = FUNC_4(VAR_13[VAR_16]->name);
  VAR_16++;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
 {
  VAR_13[VAR_16] = VAR_7[VAR_15];
  VAR_16++;
 }


 VAR_13[VAR_16] = ((void*)0);


 VAR_10 = 0;
}
