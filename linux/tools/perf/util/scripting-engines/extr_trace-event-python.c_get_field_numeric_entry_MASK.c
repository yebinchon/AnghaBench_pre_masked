
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int flags; unsigned int arraylen; unsigned int size; int offset; } ;
struct tep_event {int dummy; } ;
typedef int PyObject ;


 long long VAR_0 ;
 long long VAR_1 ;
 int * FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 int * FUNC_2 (unsigned long long) ;
 int * FUNC_3 (unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (unsigned long long) ;
 unsigned long long FUNC_5 (struct tep_event*,void*,unsigned int) ;

__attribute__((used)) static PyObject *FUNC_6(struct tep_event *VAR_4,
  struct tep_format_field *VAR_5, void *VAR_6)
{
 bool VAR_7 = VAR_5->flags & VAR_2;
 PyObject *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 unsigned long long VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_5->arraylen);
  VAR_11 = VAR_5->size / VAR_5->arraylen;
  VAR_12 = VAR_5->arraylen;
 } else {
  VAR_11 = VAR_5->size;
  VAR_12 = 1;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {

  VAR_10 = FUNC_5(VAR_4, VAR_6 + VAR_5->offset + VAR_13 * VAR_11,
    VAR_11);
  if (VAR_5->flags & VAR_3) {
   if ((long long)VAR_10 >= VAR_1 &&
     (long long)VAR_10 <= VAR_0)
    VAR_8 = FUNC_4(VAR_10);
   else
    VAR_8 = FUNC_2(VAR_10);
  } else {
   if (VAR_10 <= VAR_0)
    VAR_8 = FUNC_4(VAR_10);
   else
    VAR_8 = FUNC_3(VAR_10);
  }
  if (VAR_7)
   FUNC_1(VAR_9, VAR_13, VAR_8);
 }
 if (VAR_7)
  VAR_8 = VAR_9;
 return VAR_8;
}
