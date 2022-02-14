
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int (* listitem ) (struct buf*,struct buf*,int,int ) ;} ;
struct sd_markdown {int ext_flags; int opaque; TYPE_1__ cb; } ;
struct buf {size_t size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buf*,char*,size_t) ;
 int FUNC_1 (struct buf*,char) ;
 scalar_t__ FUNC_2 (char*,size_t,int *) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (struct buf*,struct sd_markdown*,scalar_t__,size_t) ;
 int FUNC_6 (struct buf*,struct sd_markdown*,scalar_t__,size_t) ;
 size_t FUNC_7 (char*,size_t) ;
 size_t FUNC_8 (char*,size_t) ;
 struct buf* FUNC_9 (struct sd_markdown*,int ) ;
 int FUNC_10 (struct sd_markdown*,int ) ;
 int FUNC_11 (struct buf*,struct buf*,int,int ) ;

__attribute__((used)) static size_t
FUNC_12(struct buf *VAR_5, struct sd_markdown *VAR_6, uint8_t *VAR_7, size_t VAR_8, int *VAR_9)
{
 struct buf *VAR_10 = 0, *VAR_11 = 0;
 size_t VAR_12 = 0, VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17;
 int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;


 while (VAR_16 < 3 && VAR_16 < VAR_8 && VAR_7[VAR_16] == ' ')
  VAR_16++;

 VAR_12 = FUNC_8(VAR_7, VAR_8);
 if (!VAR_12)
  VAR_12 = FUNC_7(VAR_7, VAR_8);

 if (!VAR_12)
  return 0;


 VAR_13 = VAR_12;
 while (VAR_13 < VAR_8 && VAR_7[VAR_13 - 1] != '\n')
  VAR_13++;


 VAR_10 = FUNC_9(VAR_6, VAR_0);
 VAR_11 = FUNC_9(VAR_6, VAR_0);


 FUNC_0(VAR_10, VAR_7 + VAR_12, VAR_13 - VAR_12);
 VAR_12 = VAR_13;


 while (VAR_12 < VAR_8) {
  size_t VAR_21 = 0, VAR_22 = 0;

  VAR_13++;

  while (VAR_13 < VAR_8 && VAR_7[VAR_13 - 1] != '\n')
   VAR_13++;


  if (FUNC_3(VAR_7 + VAR_12, VAR_13 - VAR_12)) {
   VAR_18 = 1;
   VAR_12 = VAR_13;
   continue;
  }


  VAR_17 = 0;
  while (VAR_17 < 4 && VAR_12 + VAR_17 < VAR_13 && VAR_7[VAR_12 + VAR_17] == ' ')
   VAR_17++;

  VAR_14 = VAR_17;

  if (VAR_6->ext_flags & VAR_1) {
   if (FUNC_2(VAR_7 + VAR_12 + VAR_17, VAR_13 - VAR_12 - VAR_17, ((void*)0)) != 0)
    VAR_20 = !VAR_20;
  }



  if (!VAR_20) {
   VAR_21 = FUNC_8(VAR_7 + VAR_12 + VAR_17, VAR_13 - VAR_12 - VAR_17);
   VAR_22 = FUNC_7(VAR_7 + VAR_12 + VAR_17, VAR_13 - VAR_12 - VAR_17);
  }


  if (VAR_18 && (
   ((*VAR_9 & VAR_2) && VAR_21) ||
   (!(*VAR_9 & VAR_2) && VAR_22))){
   *VAR_9 |= VAR_4;
   break;
  }


  if ((VAR_21 && !FUNC_4(VAR_7 + VAR_12 + VAR_17, VAR_13 - VAR_12 - VAR_17)) || VAR_22) {
   if (VAR_18)
    VAR_19 = 1;

   if (VAR_14 == VAR_16)
    break;

   if (!VAR_15)
    VAR_15 = VAR_10->size;
  }

  else if (VAR_18 && VAR_17 < 4 && VAR_7[VAR_12] != '\t') {
   *VAR_9 |= VAR_4;
   break;
  }
  else if (VAR_18) {
   FUNC_1(VAR_10, '\n');
   VAR_19 = 1;
  }

  VAR_18 = 0;


  FUNC_0(VAR_10, VAR_7 + VAR_12 + VAR_17, VAR_13 - VAR_12 - VAR_17);
  VAR_12 = VAR_13;
 }


 if (VAR_19)
  *VAR_9 |= VAR_3;

 if (*VAR_9 & VAR_3) {

  if (VAR_15 && VAR_15 < VAR_10->size) {
   FUNC_5(VAR_11, VAR_6, VAR_10->data, VAR_15);
   FUNC_5(VAR_11, VAR_6, VAR_10->data + VAR_15, VAR_10->size - VAR_15);
  }
  else
   FUNC_5(VAR_11, VAR_6, VAR_10->data, VAR_10->size);
 } else {

  if (VAR_15 && VAR_15 < VAR_10->size) {
   FUNC_6(VAR_11, VAR_6, VAR_10->data, VAR_15);
   FUNC_5(VAR_11, VAR_6, VAR_10->data + VAR_15, VAR_10->size - VAR_15);
  }
  else
   FUNC_6(VAR_11, VAR_6, VAR_10->data, VAR_10->size);
 }


 if (VAR_6->cb.listitem)
  VAR_6->cb.listitem(VAR_5, VAR_11, *VAR_9, VAR_6->opaque);

 FUNC_10(VAR_6, VAR_0);
 FUNC_10(VAR_6, VAR_0);
 return VAR_12;
}
