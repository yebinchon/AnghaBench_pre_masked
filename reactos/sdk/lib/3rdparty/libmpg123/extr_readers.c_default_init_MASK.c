
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ timeout_sec; int filelen; int flags; int buffer; int fullread; scalar_t__ filepos; int * lseek; int * r_lseek; int * r_read; int * read; int fdread; int filept; } ;
struct TYPE_6__ {scalar_t__ timeout; scalar_t__ icy_interval; int flags; } ;
struct TYPE_8__ {TYPE_2__ rdat; int * rd; int err; TYPE_1__ p; int metaflags; scalar_t__ id3buf; } ;
typedef TYPE_3__ mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_5(mpg123_handle *VAR_25)
{
 VAR_25->rdat.fdread = VAR_20;

 VAR_25->rdat.read = VAR_25->rdat.r_read != ((void*)0) ? VAR_25->rdat.r_read : VAR_22;
 VAR_25->rdat.lseek = VAR_25->rdat.r_lseek != ((void*)0) ? VAR_25->rdat.r_lseek : VAR_21;


 if(VAR_25->p.icy_interval > 0) VAR_25->rdat.lseek = VAR_18;


 VAR_25->rdat.filelen = VAR_25->p.flags & VAR_5 ? -1 : FUNC_3(VAR_25);
 VAR_25->rdat.filepos = 0;
 if(VAR_25->p.flags & VAR_2)
  VAR_25->rdat.flags |= VAR_15;





 if(VAR_25->rdat.filelen >= 0)
 {
  VAR_25->rdat.flags |= VAR_15;
  if(!FUNC_4((char*)VAR_25->id3buf,"TAG",3))
  {
   VAR_25->rdat.flags |= VAR_13;
   VAR_25->metaflags |= VAR_4;
  }
 }

 else if(VAR_25->p.flags & VAR_6)
 {





  if (VAR_25->rd == &VAR_23[VAR_16])
  {
   VAR_25->rd = &VAR_23[VAR_11];
   VAR_25->rdat.fullread = VAR_19;
  }

  else if(VAR_25->rd == &VAR_23[VAR_12])
  {
   VAR_25->rd = &VAR_23[VAR_10];
   VAR_25->rdat.fullread = VAR_17;
  }

  else
  {
   if(VAR_7) FUNC_1("mpg123 Programmer's fault: invalid reader");
   return -1;
  }
  FUNC_0(&VAR_25->rdat.buffer);
  VAR_25->rdat.filelen = 0;
  VAR_25->rdat.flags |= VAR_9;

 }
 return 0;
}
