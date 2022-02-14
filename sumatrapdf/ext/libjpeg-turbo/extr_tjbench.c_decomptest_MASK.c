
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tjhandle ;
struct TYPE_3__ {int num; int denom; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 unsigned char FUNC_4 (unsigned char) ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (unsigned char*,int,int,int *) ;
 double FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (unsigned char*,int,int) ;
 int FUNC_12 (int,int) ;
 size_t VAR_8 ;
 int FUNC_13 (char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (char*,unsigned char*,int,int,size_t,int) ;
 TYPE_1__ VAR_10 ;
 char* FUNC_15 (double,int,char*,int) ;
 int FUNC_16 (char*,int,char*,...) ;
 char* FUNC_17 (char*,char) ;
 char** VAR_11 ;
 int* VAR_12 ;
 int FUNC_18 (int,int,int) ;
 int FUNC_19 (int *,unsigned char*,unsigned long,unsigned char*,int,int,int,size_t,int) ;
 int FUNC_20 (int *,unsigned char*,unsigned long,unsigned char*,int) ;
 int FUNC_21 (int *) ;
 int* VAR_13 ;
 int * FUNC_22 () ;
 int* VAR_14 ;
 int* VAR_15 ;
 scalar_t__ VAR_16 ;

int FUNC_23(unsigned char *VAR_17, unsigned char **VAR_18,
 unsigned long *VAR_19, unsigned char *VAR_20, int VAR_21, int VAR_22,
 int VAR_23, int VAR_24, char *VAR_25, int VAR_26, int VAR_27)
{
 char VAR_28[1024], VAR_29[20]="\0", VAR_30[6]="\0", *VAR_31;
 FILE *VAR_32=((void*)0); tjhandle VAR_33=((void*)0);
 int VAR_34, VAR_35, VAR_36, VAR_37=0, VAR_38=0;
 double VAR_39, VAR_40;
 int VAR_41=VAR_14[VAR_8];
 int VAR_42=FUNC_18(VAR_21, VAR_22, VAR_23), VAR_43;
 int VAR_44=(VAR_16==VAR_2)? VAR_21 : FUNC_0(VAR_21, VAR_10);
 int VAR_45=(VAR_16==VAR_2)? VAR_22 : FUNC_0(VAR_22, VAR_10);
 int VAR_46=VAR_44*VAR_41;
 int VAR_47=(VAR_21+VAR_26-1)/VAR_26, VAR_48=(VAR_22+VAR_27-1)/VAR_27;
 unsigned char *VAR_49, *VAR_50;

 if(VAR_24>0)
 {
  FUNC_16(VAR_30, 6, "_Q%d", VAR_24);
  VAR_30[5]=0;
 }

 if((VAR_33=FUNC_22())==((void*)0))
  FUNC_2("executing tjInitDecompress()");

 VAR_43=(VAR_16==VAR_2? VAR_42:VAR_46*VAR_45);
 if(VAR_20==((void*)0))
 {
  if((VAR_20=(unsigned char *)FUNC_10(VAR_43)) == ((void*)0))
   FUNC_3("allocating image buffer");
  VAR_37=1;
 }


 FUNC_11(VAR_20, 127, VAR_43);


 if(VAR_16==VAR_2)
 {
  if(FUNC_20(VAR_33, VAR_18[0], VAR_19[0], VAR_20, VAR_7)==-1)
   FUNC_2("executing tjDecompressToYUV()");
 }
 else if(FUNC_19(VAR_33, VAR_18[0], VAR_19[0], VAR_20, VAR_44,
  VAR_46, VAR_45, VAR_8, VAR_7)==-1)
  FUNC_2("executing tjDecompress2()");


 for(VAR_36=0, VAR_39=FUNC_9(); (VAR_40=FUNC_9()-VAR_39)<VAR_3; VAR_36++)
 {
  int VAR_51=0;
  if(VAR_16==VAR_2)
  {
   if(FUNC_20(VAR_33, VAR_18[0], VAR_19[0], VAR_20, VAR_7)==-1)
    FUNC_2("executing tjDecompressToYUV()");
  }
  else for(VAR_34=0, VAR_49=VAR_20; VAR_34<VAR_48; VAR_34++, VAR_49+=VAR_46*VAR_27)
  {
   for(VAR_35=0, VAR_50=VAR_49; VAR_35<VAR_47; VAR_35++, VAR_51++, VAR_50+=VAR_41*VAR_26)
   {
    int VAR_52=VAR_5? FUNC_12(VAR_26, VAR_21-VAR_35*VAR_26):VAR_44;
    int VAR_53=VAR_5? FUNC_12(VAR_27, VAR_22-VAR_34*VAR_27):VAR_45;
    if(FUNC_19(VAR_33, VAR_18[VAR_51], VAR_19[VAR_51], VAR_50, VAR_52,
     VAR_46, VAR_53, VAR_8, VAR_7)==-1)
     FUNC_2("executing tjDecompress2()");
   }
  }
 }

 if(FUNC_21(VAR_33)==-1) FUNC_2("executing tjDestroy()");
 VAR_33=((void*)0);

 if(VAR_9)
 {
  FUNC_13("%s\n",
   FUNC_15((double)(VAR_21*VAR_22)/1000000.*(double)VAR_36/VAR_40, 4, VAR_28, 1024));
 }
 else
 {
  FUNC_13("D--> Frame rate:           %f fps\n", (double)VAR_36/VAR_40);
  FUNC_13("     Dest. throughput:     %f Megapixels/sec\n",
   (double)(VAR_21*VAR_22)/1000000.*(double)VAR_36/VAR_40);
 }
 if(VAR_16==VAR_2)
 {
  FUNC_16(VAR_28, 1024, "%s_%s%s.yuv", VAR_25, VAR_11[VAR_23],
   VAR_30);
  if((VAR_32=FUNC_6(VAR_28, "wb"))==((void*)0))
   FUNC_3("opening YUV image for output");
  if(FUNC_8(VAR_20, VAR_42, 1, VAR_32)!=1)
   FUNC_3("writing YUV image");
  FUNC_5(VAR_32); VAR_32=((void*)0);
 }
 else
 {
  if(VAR_10.num!=1 || VAR_10.denom!=1)
   FUNC_16(VAR_29, 20, "%d_%d", VAR_10.num, VAR_10.denom);
  else if(VAR_26!=VAR_21 || VAR_27!=VAR_22)
   FUNC_16(VAR_29, 20, "%dx%d", VAR_26, VAR_27);
  else FUNC_16(VAR_29, 20, "full");
  if(VAR_4)
   FUNC_16(VAR_28, 1024, "%s_%s.%s", VAR_25, VAR_29, VAR_6);
  else
   FUNC_16(VAR_28, 1024, "%s_%s%s_%s.%s", VAR_25, VAR_11[VAR_23],
    VAR_30, VAR_29, VAR_6);
  if(FUNC_14(VAR_28, VAR_20, VAR_44, VAR_45, VAR_8,
   (VAR_7&VAR_0)!=0)==-1)
   FUNC_1("saving bitmap");
  VAR_31=FUNC_17(VAR_28, '.');
  FUNC_16(VAR_31, 1024-(VAR_31-VAR_28), "-err.%s", VAR_6);
  if(VAR_17 && VAR_10.num==1 && VAR_10.denom==1)
  {
   if(!VAR_9) FUNC_13("Compression error written to %s.\n", VAR_28);
   if(VAR_23==VAR_1)
   {
    int VAR_54, VAR_55;
    for(VAR_34=0, VAR_54=0; VAR_34<VAR_22; VAR_34++, VAR_54+=VAR_46)
    {
     for(VAR_35=0, VAR_55=VAR_54; VAR_35<VAR_21; VAR_35++, VAR_55+=VAR_41)
     {
      int VAR_56=VAR_55+VAR_15[VAR_8];
      int VAR_57=VAR_55+VAR_13[VAR_8];
      int VAR_58=VAR_55+VAR_12[VAR_8];
      int VAR_59=(int)((double)VAR_17[VAR_56]*0.299
       + (double)VAR_17[VAR_57]*0.587
       + (double)VAR_17[VAR_58]*0.114 + 0.5);
      if(VAR_59>255) VAR_59=255; if(VAR_59<0) VAR_59=0;
      VAR_20[VAR_56]=FUNC_4(VAR_20[VAR_56]-VAR_59);
      VAR_20[VAR_57]=FUNC_4(VAR_20[VAR_57]-VAR_59);
      VAR_20[VAR_58]=FUNC_4(VAR_20[VAR_58]-VAR_59);
     }
    }
   }
   else
   {
    for(VAR_34=0; VAR_34<VAR_22; VAR_34++)
     for(VAR_35=0; VAR_35<VAR_21*VAR_41; VAR_35++)
      VAR_20[VAR_46*VAR_34+VAR_35]
       =FUNC_4(VAR_20[VAR_46*VAR_34+VAR_35]-VAR_17[VAR_46*VAR_34+VAR_35]);
   }
   if(FUNC_14(VAR_28, VAR_20, VAR_21, VAR_22, VAR_8,
    (VAR_7&VAR_0)!=0)==-1)
    FUNC_1("saving bitmap");
  }
 }

 bailout:
 if(VAR_32) {FUNC_5(VAR_32); VAR_32=((void*)0);}
 if(VAR_33) {FUNC_21(VAR_33); VAR_33=((void*)0);}
 if(VAR_20 && VAR_37) {FUNC_7(VAR_20); VAR_20=((void*)0);}
 return VAR_38;
}
