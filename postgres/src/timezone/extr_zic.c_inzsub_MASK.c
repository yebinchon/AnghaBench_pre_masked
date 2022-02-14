
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_loyear; void* r_linenum; void* r_filename; } ;
struct zone {char* z_format; char z_format_specifier; scalar_t__ z_untiltime; TYPE_1__ z_untilrule; void* z_rule; int z_stdoff; void* z_linenum; void* z_filename; int * z_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 void* VAR_15 ;
 int FUNC_3 (char*,int ) ;
 struct zone* FUNC_4 (struct zone*,int,int,int *) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int ,char*) ;
 struct zone* VAR_23 ;

__attribute__((used)) static bool
FUNC_11(char **VAR_24, int VAR_25, bool VAR_26)
{
 char *VAR_27;
 char *VAR_28;
 static struct zone VAR_29;
 int VAR_30,
    VAR_31,
    VAR_32;
 int VAR_33,
    VAR_34;
 int VAR_35,
    VAR_36;
 bool VAR_37;

 if (VAR_26)
 {
  VAR_30 = VAR_2;
  VAR_31 = VAR_1;
  VAR_32 = VAR_0;
  VAR_33 = VAR_6;
  VAR_34 = VAR_4;
  VAR_35 = VAR_3;
  VAR_36 = VAR_5;
  VAR_29.z_name = ((void*)0);
 }
 else if (!FUNC_5(VAR_24[VAR_8]))
  return 0;
 else
 {
  VAR_30 = VAR_10;
  VAR_31 = VAR_9;
  VAR_32 = VAR_7;
  VAR_33 = VAR_14;
  VAR_34 = VAR_12;
  VAR_35 = VAR_11;
  VAR_36 = VAR_13;
  VAR_29.z_name = FUNC_1(VAR_24[VAR_8]);
 }
 VAR_29.z_filename = VAR_15;
 VAR_29.z_linenum = VAR_16;
 VAR_29.z_stdoff = FUNC_3(VAR_24[VAR_30], FUNC_0("invalid UT offset"));
 if ((VAR_27 = FUNC_8(VAR_24[VAR_32], '%')) != ((void*)0))
 {
  if ((*++VAR_27 != 's' && *VAR_27 != 'z') || FUNC_8(VAR_27, '%')
   || FUNC_8(VAR_24[VAR_32], '/'))
  {
   FUNC_2(FUNC_0("invalid abbreviation format"));
   return 0;
  }
 }
 VAR_29.z_rule = FUNC_1(VAR_24[VAR_31]);
 VAR_29.z_format = VAR_28 = FUNC_1(VAR_24[VAR_32]);
 VAR_29.z_format_specifier = VAR_27 ? *VAR_27 : '\0';
 if (VAR_29.z_format_specifier == 'z')
 {
  if (VAR_20)
   FUNC_10(FUNC_0("format '%s' not handled by pre-2015 versions of zic"),
     VAR_29.z_format);
  VAR_28[VAR_27 - VAR_24[VAR_32]] = 's';
 }
 if (VAR_17 < FUNC_9(VAR_29.z_format))
  VAR_17 = FUNC_9(VAR_29.z_format);
 VAR_37 = VAR_25 > VAR_33;
 if (VAR_37)
 {
  VAR_29.z_untilrule.r_filename = VAR_15;
  VAR_29.z_untilrule.r_linenum = VAR_16;
  FUNC_7(&VAR_29.z_untilrule,
    VAR_24[VAR_33],
    "only",
    "",
    (VAR_25 > VAR_34) ?
    VAR_24[VAR_34] : "Jan",
    (VAR_25 > VAR_35) ? VAR_24[VAR_35] : "1",
    (VAR_25 > VAR_36) ? VAR_24[VAR_36] : "0");
  VAR_29.z_untiltime = FUNC_6(&VAR_29.z_untilrule,
        VAR_29.z_untilrule.r_loyear);
  if (VAR_26 && VAR_21 > 0 &&
   VAR_29.z_untiltime > VAR_19 &&
   VAR_29.z_untiltime < VAR_18 &&
   VAR_23[VAR_21 - 1].z_untiltime > VAR_19 &&
   VAR_23[VAR_21 - 1].z_untiltime < VAR_18 &&
   VAR_23[VAR_21 - 1].z_untiltime >= VAR_29.z_untiltime)
  {
   FUNC_2(FUNC_0("Zone continuation line end time is not after end time of previous line"));
   return 0;
  }
 }
 VAR_23 = FUNC_4(VAR_23, sizeof *VAR_23, VAR_21, &VAR_22);
 VAR_23[VAR_21++] = VAR_29;





 return VAR_37;
}
