
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bufferchain {scalar_t__ size; scalar_t__ pos; } ;
typedef scalar_t__ ssize_t ;
typedef int readbuf ;
struct TYPE_5__ {scalar_t__ (* fullread ) (TYPE_2__*,unsigned char*,int) ;struct bufferchain buffer; } ;
struct TYPE_6__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bufferchain*,unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bufferchain*,unsigned char*,scalar_t__) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (char*,long,long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(mpg123_handle *VAR_4, unsigned char *VAR_5, ssize_t VAR_6)
{
 struct bufferchain *VAR_7 = &VAR_4->rdat.buffer;
 ssize_t VAR_8;
 if(VAR_7->size - VAR_7->pos < VAR_6)
 {
  unsigned char VAR_9[4096];
  ssize_t VAR_10 = VAR_6 - (VAR_7->size-VAR_7->pos);
  while(VAR_10>0)
  {
   int VAR_11;
   ssize_t VAR_12 = VAR_4->rdat.fullread(VAR_4, VAR_9, sizeof(VAR_9));
   if(VAR_12 < 0)
   {
    if(VAR_0) FUNC_4("buffer reading");
    return VAR_1;
   }

   if(VAR_2) FUNC_2("buffered_fullread: buffering %li bytes from stream (if > 0)", (long)VAR_12);
   if(VAR_12 > 0 && (VAR_11=FUNC_0(VAR_7, VAR_9, VAR_12)) != 0)
   {
    if(VAR_0) FUNC_5("unable to add to chain, return: %i", VAR_11);
    return VAR_1;
   }

   VAR_10 -= VAR_12;
   if(VAR_12 < sizeof(VAR_9))
   {
    if(VAR_2) FUNC_6(VAR_3, "Note: Input data end.\n");
    break;
   }
  }
  if(VAR_7->size - VAR_7->pos < VAR_6)
  VAR_6 = VAR_7->size - VAR_7->pos;
 }
 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);

 if(VAR_2) FUNC_3("wanted %li, got %li", (long)VAR_6, (long)VAR_8);

 if(VAR_8 != VAR_6){ if(VAR_0) FUNC_4("gotcount != count"); return VAR_1; }
 else return VAR_8;
}
