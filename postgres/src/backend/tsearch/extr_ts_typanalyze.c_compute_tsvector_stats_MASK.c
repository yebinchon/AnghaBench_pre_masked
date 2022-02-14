
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int hash_ctl ;
typedef double float4 ;
struct TYPE_23__ {int pos; int len; } ;
typedef TYPE_3__ WordEntry ;
struct TYPE_24__ {int stats_valid; double stanullfrac; double stawidth; double stadistinct; double** stanumbers; int* numnumbers; scalar_t__** stavalues; int* numvalues; int* statyplen; int* statypbyval; char* statypalign; int * statypid; int * stacoll; int * staop; int * stakind; int anl_context; TYPE_1__* attr; } ;
typedef TYPE_4__ VacAttrStats ;
struct TYPE_22__ {int length; scalar_t__ lexeme; } ;
struct TYPE_25__ {int frequency; int delta; TYPE_2__ key; } ;
typedef TYPE_5__ TrackItem ;
struct TYPE_28__ {int keysize; int entrysize; int hcxt; int match; int hash; } ;
struct TYPE_27__ {char* lexeme; int length; } ;
struct TYPE_26__ {int size; } ;
struct TYPE_21__ {int attstattarget; } ;
typedef TYPE_6__* TSVector ;
typedef int MemoryContext ;
typedef TYPE_7__ LexemeHashKey ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_8__ HASHCTL ;
typedef scalar_t__ Datum ;
typedef scalar_t__ (* AnalyzeAttrFetchFunc ) (TYPE_4__*,int,int*) ;


 TYPE_3__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_6__* FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_8 ;
 char* FUNC_9 (TYPE_6__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ,char*,int,int,int,int,int) ;
 int * FUNC_14 (char*,int,TYPE_8__*,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,void const*,int ,int*) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (TYPE_5__**,int,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_24 () ;

__attribute__((used)) static void
FUNC_25(VacAttrStats *VAR_15,
        AnalyzeAttrFetchFunc VAR_16,
        int VAR_17,
        double VAR_18)
{
 int VAR_19;
 int VAR_20 = 0;
 double VAR_21 = 0;


 HTAB *VAR_22;
 HASHCTL VAR_23;
 HASH_SEQ_STATUS VAR_24;


 int VAR_25;


 int VAR_26;
 int VAR_27,
    VAR_28;
 LexemeHashKey VAR_29;
 TrackItem *VAR_30;







 VAR_19 = VAR_15->attr->attstattarget * 10;





 VAR_26 = (VAR_19 + 10) * 1000 / 7;






 FUNC_5(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.keysize = sizeof(LexemeHashKey);
 VAR_23.entrysize = sizeof(TrackItem);
 VAR_23.hash = VAR_11;
 VAR_23.match = VAR_12;
 VAR_23.hcxt = VAR_0;
 VAR_22 = FUNC_14("Analyzed lexemes table",
         VAR_19,
         &VAR_23,
         VAR_5 | VAR_7 | VAR_3 | VAR_4);


 VAR_25 = 1;
 VAR_28 = 0;


 for (VAR_27 = 0; VAR_27 < VAR_17; VAR_27++)
 {
  Datum VAR_31;
  bool VAR_32;
  TSVector VAR_33;
  WordEntry *VAR_34;
  char *VAR_35;
  int VAR_36;

  FUNC_24();

  VAR_31 = VAR_16(VAR_15, VAR_27, &VAR_32);




  if (VAR_32)
  {
   VAR_20++;
   continue;
  }







  VAR_21 += FUNC_11(FUNC_2(VAR_31));




  VAR_33 = FUNC_3(VAR_31);





  VAR_35 = FUNC_9(VAR_33);
  VAR_34 = FUNC_0(VAR_33);
  for (VAR_36 = 0; VAR_36 < VAR_33->size; VAR_36++)
  {
   bool VAR_37;







   VAR_29.lexeme = VAR_35 + VAR_34->pos;
   VAR_29.length = VAR_34->len;


   VAR_30 = (TrackItem *) FUNC_16(VAR_22,
            (const void *) &VAR_29,
            VAR_6, &VAR_37);

   if (VAR_37)
   {

    VAR_30->frequency++;
   }
   else
   {

    VAR_30->frequency = 1;
    VAR_30->delta = VAR_25 - 1;

    VAR_30->key.lexeme = FUNC_20(VAR_29.length);
    FUNC_19(VAR_30->key.lexeme, VAR_29.lexeme, VAR_29.length);
   }


   VAR_28++;


   if (VAR_28 % VAR_26 == 0)
   {
    FUNC_22(VAR_22, VAR_25);
    VAR_25++;
   }


   VAR_34++;
  }


  if (FUNC_10(VAR_33) != VAR_31)
   FUNC_21(VAR_33);
 }


 if (VAR_20 < VAR_17)
 {
  int VAR_38 = VAR_17 - VAR_20;
  int VAR_39;
  TrackItem **VAR_40;
  int VAR_41;
  int VAR_42;
  int VAR_43,
     VAR_44;

  VAR_15->stats_valid = 1;

  VAR_15->stanullfrac = (double) VAR_20 / (double) VAR_17;
  VAR_15->stawidth = VAR_21 / (double) VAR_38;


  VAR_15->stadistinct = -1.0 * (1.0 - VAR_15->stanullfrac);
  VAR_42 = 9 * VAR_28 / VAR_26;

  VAR_39 = FUNC_15(VAR_22);
  VAR_40 = (TrackItem **) FUNC_20(sizeof(TrackItem *) * VAR_39);

  FUNC_17(&VAR_24, VAR_22);
  VAR_41 = 0;
  VAR_43 = VAR_28;
  VAR_44 = 0;
  while ((VAR_30 = (TrackItem *) FUNC_18(&VAR_24)) != ((void*)0))
  {
   if (VAR_30->frequency > VAR_42)
   {
    VAR_40[VAR_41++] = VAR_30;
    VAR_43 = FUNC_7(VAR_43, VAR_30->frequency);
    VAR_44 = FUNC_4(VAR_44, VAR_30->frequency);
   }
  }
  FUNC_1(VAR_41 <= VAR_39);


  FUNC_13(VAR_1, "tsvector_stats: target # mces = %d, bucket width = %d, "
    "# lexemes = %d, hashtable size = %d, usable entries = %d",
    VAR_19, VAR_26, VAR_28, VAR_39, VAR_41);






  if (VAR_19 < VAR_41)
  {
   FUNC_23(VAR_40, VAR_41, sizeof(TrackItem *),
      VAR_13);

   VAR_43 = VAR_40[VAR_19 - 1]->frequency;
  }
  else
   VAR_19 = VAR_41;


  if (VAR_19 > 0)
  {
   MemoryContext VAR_45;
   Datum *VAR_46;
   float4 *VAR_47;
   FUNC_23(VAR_40, VAR_19, sizeof(TrackItem *),
      VAR_14);


   VAR_45 = FUNC_6(VAR_15->anl_context);
   VAR_46 = (Datum *) FUNC_20(VAR_19 * sizeof(Datum));
   VAR_47 = (float4 *) FUNC_20((VAR_19 + 2) * sizeof(float4));





   for (VAR_39 = 0; VAR_39 < VAR_19; VAR_39++)
   {
    TrackItem *VAR_48 = VAR_40[VAR_39];

    VAR_46[VAR_39] =
     FUNC_8(FUNC_12(VAR_48->key.lexeme,
                VAR_48->key.length));
    VAR_47[VAR_39] = (double) VAR_48->frequency / (double) VAR_38;
   }
   VAR_47[VAR_39++] = (double) VAR_43 / (double) VAR_38;
   VAR_47[VAR_39] = (double) VAR_44 / (double) VAR_38;
   FUNC_6(VAR_45);

   VAR_15->stakind[0] = VAR_8;
   VAR_15->staop[0] = VAR_10;
   VAR_15->stacoll[0] = VAR_2;
   VAR_15->stanumbers[0] = VAR_47;

   VAR_15->numnumbers[0] = VAR_19 + 2;
   VAR_15->stavalues[0] = VAR_46;
   VAR_15->numvalues[0] = VAR_19;

   VAR_15->statypid[0] = VAR_9;
   VAR_15->statyplen[0] = -1;
   VAR_15->statypbyval[0] = 0;
   VAR_15->statypalign[0] = 'i';
  }
 }
 else
 {

  VAR_15->stats_valid = 1;
  VAR_15->stanullfrac = 1.0;
  VAR_15->stawidth = 0;
  VAR_15->stadistinct = 0.0;
 }





}
