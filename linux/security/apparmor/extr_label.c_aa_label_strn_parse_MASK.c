
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct aa_label {int size; int * vec; } ;
typedef int gfp_t ;
struct TYPE_14__ {TYPE_1__* unconfined; } ;
struct TYPE_13__ {scalar_t__ ns; struct aa_label label; } ;
struct TYPE_12__ {struct aa_label label; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aa_label* FUNC_2 (int) ;
 int VAR_2 ;
 struct aa_label* FUNC_3 (struct aa_label*) ;
 TYPE_2__* FUNC_4 (int ) ;
 char* FUNC_5 (char const*,int) ;
 struct aa_label* FUNC_6 (TYPE_2__**,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__**,int,int ) ;
 TYPE_2__* FUNC_8 (struct aa_label*,struct aa_label*,char const*,int) ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (struct aa_label*) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 char* FUNC_11 (char const*,size_t) ;
 TYPE_2__** VAR_5 ;
 int FUNC_12 (int ,TYPE_2__**,int) ;
 struct aa_label* FUNC_13 (TYPE_2__**,int) ;
 int FUNC_14 (int ,TYPE_2__**,int,int ) ;

struct aa_label *FUNC_15(struct aa_label *VAR_6, const char *VAR_7,
         size_t VAR_8, gfp_t VAR_9, bool VAR_10,
         bool VAR_11)
{
 FUNC_1(VAR_3, VAR_5);
 struct aa_label *VAR_12, *VAR_13 = VAR_6;
 int VAR_14, VAR_15, VAR_16 = 0, VAR_17;
 const char *VAR_18 = VAR_7 + VAR_8;
 const char *VAR_19;

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);

 VAR_7 = FUNC_11(VAR_7, VAR_8);
 if (VAR_7 == ((void*)0) || (*VAR_7 == '=' && VAR_6 != &VAR_4->unconfined->label))
  return FUNC_2(-VAR_0);

 VAR_15 = FUNC_9(VAR_7, VAR_18 - VAR_7);
 if (*VAR_7 == '&' || VAR_11) {

  VAR_16 = VAR_6->size;
  VAR_15 += VAR_16;
  if (*VAR_7 == '&')
   VAR_7++;
 }

 VAR_17 = FUNC_14(VAR_3, VAR_5, VAR_15, VAR_9);
 if (VAR_17)
  return FUNC_2(VAR_17);

 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++)
  VAR_5[VAR_14] = FUNC_4(VAR_6->vec[VAR_14]);

 for (VAR_19 = FUNC_5(VAR_7, VAR_18 - VAR_7), VAR_14 = VAR_16;
      VAR_19 && VAR_14 < VAR_15; VAR_14++) {
  VAR_5[VAR_14] = FUNC_8(VAR_6, VAR_13, VAR_7, VAR_19 - VAR_7);
  if (!VAR_5[VAR_14])
   goto fail;




  if (VAR_5[VAR_14]->ns != FUNC_10(VAR_13))
   VAR_13 = &VAR_5[VAR_14]->label;
  VAR_7 = VAR_19 + 3;
  VAR_19 = FUNC_5(VAR_7, VAR_18 - VAR_7);
 }

 if (VAR_14 < VAR_15) {
  VAR_5[VAR_14] = FUNC_8(VAR_6, VAR_13, VAR_7, VAR_18 - VAR_7);
  if (!VAR_5[VAR_14])
   goto fail;
 }
 if (VAR_15 == 1)

  return &VAR_5[0]->label;

 VAR_15 -= FUNC_7(VAR_5, VAR_15, VAR_2);

 if (VAR_15 == 1) {
  VAR_12 = FUNC_3(&VAR_5[0]->label);
  goto out;
 }

 if (VAR_10)
  VAR_12 = FUNC_6(VAR_5, VAR_15, VAR_9);
 else
  VAR_12 = FUNC_13(VAR_5, VAR_15);
 if (!VAR_12)
  goto fail;

out:

 FUNC_12(VAR_3, VAR_5, VAR_15);
 return VAR_12;

fail:
 VAR_12 = FUNC_2(-VAR_1);
 goto out;
}
