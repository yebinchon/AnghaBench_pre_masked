
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_5) {
  FUNC_3(VAR_10,
   "Set core-power configuration for one of the four clos ids\n");
  FUNC_3(VAR_10,
   "\tSpecify targeted clos id with [--clos|-c]\n");
  FUNC_3(VAR_10, "\tSpecify clos EPP with [--epp|-e]\n");
  FUNC_3(VAR_10,
   "\tSpecify clos Proportional Priority [--weight|-w]\n");
  FUNC_3(VAR_10, "\tSpecify clos min with [--min|-n]\n");
  FUNC_3(VAR_10, "\tSpecify clos max with [--max|-m]\n");
  FUNC_3(VAR_10, "\tSpecify clos desired with [--desired|-d]\n");
  FUNC_0(0);
 }

 if (VAR_6 < 0 || VAR_6 > 3) {
  FUNC_3(VAR_10, "Invalid clos id\n");
  FUNC_0(0);
 }
 if (VAR_1 < 0 || VAR_1 > 0x0F) {
  FUNC_3(VAR_10, "clos epp is not specified, default: 0\n");
  VAR_1 = 0;
 }
 if (VAR_4 < 0 || VAR_4 > 0x0F) {
  FUNC_3(VAR_10,
   "clos frequency weight is not specified, default: 0\n");
  VAR_4 = 0;
 }
 if (VAR_3 < 0) {
  FUNC_3(VAR_10, "clos min is not specified, default: 0\n");
  VAR_3 = 0;
 }
 if (VAR_2 < 0) {
  FUNC_3(VAR_10, "clos max is not specified, default: 0xff\n");
  VAR_2 = 0xff;
 }
 if (VAR_0 < 0) {
  FUNC_3(VAR_10, "clos desired is not specified, default: 0\n");
  VAR_0 = 0x00;
 }

 FUNC_5(VAR_8);
 if (VAR_7)
  FUNC_2(VAR_9, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 else
  FUNC_1(VAR_9, ((void*)0),
            ((void*)0), ((void*)0), ((void*)0));
 FUNC_4(VAR_8);
}
