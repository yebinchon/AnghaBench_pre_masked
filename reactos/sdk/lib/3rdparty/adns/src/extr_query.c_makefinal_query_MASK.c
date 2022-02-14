
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int byte ;
typedef TYPE_3__* adns_query ;
struct TYPE_14__ {scalar_t__ bytes; int untyped; } ;
struct TYPE_16__ {int nrrs; size_t rrsz; int status; scalar_t__ owner; scalar_t__ cname; TYPE_2__ rrs; } ;
typedef TYPE_4__ adns_answer ;
struct TYPE_15__ {int interim_allocd; TYPE_4__* answer; scalar_t__ preserved_allocd; TYPE_1__* typei; int * final_allocspace; } ;
struct TYPE_13__ {int (* makefinal ) (TYPE_3__*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *,size_t) ;
 int FUNC_2 (TYPE_3__*,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(adns_query VAR_1) {
  adns_answer *VAR_2;
  int VAR_3;

  VAR_2= VAR_1->answer;

  if (VAR_1->interim_allocd) {
    VAR_2= FUNC_5(VAR_1->answer, FUNC_0(FUNC_0(sizeof(*VAR_2)) + VAR_1->interim_allocd));
    if (!VAR_2) goto x_nomem;
    VAR_1->answer= VAR_2;
  }

  VAR_1->final_allocspace= (byte*)VAR_2 + FUNC_0(sizeof(*VAR_2));
  FUNC_2(VAR_1,&VAR_2->cname);
  FUNC_2(VAR_1,&VAR_2->owner);

  if (VAR_2->nrrs) {
    FUNC_1(VAR_1, &VAR_2->rrs.untyped, (size_t) VAR_2->nrrs*VAR_2->rrsz);

    for (VAR_3=0; VAR_3<VAR_2->nrrs; VAR_3++)
      VAR_1->typei->makefinal(VAR_1, VAR_2->rrs.bytes + VAR_3*VAR_2->rrsz);
  }

  FUNC_4(VAR_1);
  return;

 x_nomem:
  VAR_1->preserved_allocd= 0;
  VAR_1->answer->cname= 0;
  VAR_1->answer->owner= 0;
  FUNC_3(VAR_1);

  VAR_1->answer->status= VAR_0;
  FUNC_4(VAR_1);
}
