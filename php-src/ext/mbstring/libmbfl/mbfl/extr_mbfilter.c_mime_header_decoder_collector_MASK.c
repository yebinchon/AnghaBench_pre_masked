
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {size_t pos; int * buffer; } ;
struct mime_header_decoder_data {int status; size_t cspos; TYPE_1__* conv1_filter; TYPE_9__ tmpdev; TYPE_1__* deco_filter; int const* encoding; int const* incode; } ;
typedef int mbfl_encoding ;
struct TYPE_15__ {int (* filter_function ) (int,TYPE_1__*) ;int (* filter_flush ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*,TYPE_9__*) ;
 int FUNC_1 (TYPE_1__*,int const*,int *) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int,TYPE_1__*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14(int VAR_5, void* VAR_6)
{
 const mbfl_encoding *VAR_7;
 struct mime_header_decoder_data *VAR_8 = (struct mime_header_decoder_data*)VAR_6;

 switch (VAR_8->status) {
 case 1:
  if (VAR_5 == 0x3f) {
   FUNC_2(VAR_5, &VAR_8->tmpdev);
   VAR_8->cspos = VAR_8->tmpdev.pos;
   VAR_8->status = 2;
  } else {
   FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
   FUNC_3(&VAR_8->tmpdev);
   if (VAR_5 == 0x3d) {
    FUNC_2(VAR_5, &VAR_8->tmpdev);
   } else if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
    VAR_8->status = 9;
   } else {
    (*VAR_8->conv1_filter->filter_function)(VAR_5, VAR_8->conv1_filter);
    VAR_8->status = 0;
   }
  }
  break;
 case 2:
  if (VAR_5 == 0x3f) {

   FUNC_2('\0', &VAR_8->tmpdev);
   VAR_7 = FUNC_5((const char *)&VAR_8->tmpdev.buffer[VAR_8->cspos]);
   if (VAR_7 != ((void*)0)) {
    VAR_8->incode = VAR_7;
    VAR_8->status = 3;
   }
   FUNC_4(&VAR_8->tmpdev);
   FUNC_2(VAR_5, &VAR_8->tmpdev);
  } else {
   FUNC_2(VAR_5, &VAR_8->tmpdev);
   if (VAR_8->tmpdev.pos > 100) {
    VAR_8->status = 0;
   } else if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
    FUNC_4(&VAR_8->tmpdev);
    VAR_8->status = 9;
   }
   if (VAR_8->status != 2) {
    FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
    FUNC_3(&VAR_8->tmpdev);
   }
  }
  break;
 case 3:
  FUNC_2(VAR_5, &VAR_8->tmpdev);
  if (VAR_5 == 0x42 || VAR_5 == 0x62) {
   VAR_8->encoding = &VAR_2;
   VAR_8->status = 4;
  } else if (VAR_5 == 0x51 || VAR_5 == 0x71) {
   VAR_8->encoding = &VAR_3;
   VAR_8->status = 4;
  } else {
   if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
    FUNC_4(&VAR_8->tmpdev);
    VAR_8->status = 9;
   } else {
    VAR_8->status = 0;
   }
   FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
   FUNC_3(&VAR_8->tmpdev);
  }
  break;
 case 4:
  FUNC_2(VAR_5, &VAR_8->tmpdev);
  if (VAR_5 == 0x3f) {

   FUNC_1(VAR_8->conv1_filter, VAR_8->incode, &VAR_4);

   FUNC_1(VAR_8->deco_filter, VAR_8->encoding, &VAR_0);
   VAR_8->status = 5;
  } else {
   if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
    FUNC_4(&VAR_8->tmpdev);
    VAR_8->status = 9;
   } else {
    VAR_8->status = 0;
   }
   FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
  }
  FUNC_3(&VAR_8->tmpdev);
  break;
 case 5:
  if (VAR_5 == 0x3f) {
   VAR_8->status = 6;
  } else {
   (*VAR_8->deco_filter->filter_function)(VAR_5, VAR_8->deco_filter);
  }
  break;
 case 6:
  if (VAR_5 == 0x3d) {

   (*VAR_8->deco_filter->filter_flush)(VAR_8->deco_filter);
   (*VAR_8->conv1_filter->filter_flush)(VAR_8->conv1_filter);
   FUNC_1(VAR_8->conv1_filter, &VAR_1, &VAR_4);
   VAR_8->status = 7;
  } else {
   (*VAR_8->deco_filter->filter_function)(0x3f, VAR_8->deco_filter);
   if (VAR_5 != 0x3f) {
    (*VAR_8->deco_filter->filter_function)(VAR_5, VAR_8->deco_filter);
    VAR_8->status = 5;
   }
  }
  break;
 case 7:
  if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
   VAR_8->status = 8;
  } else {
   FUNC_2(VAR_5, &VAR_8->tmpdev);
   if (VAR_5 == 0x3d) {
    VAR_8->status = 1;
   } else if (VAR_5 != 0x20 && VAR_5 != 0x09) {
    FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
    FUNC_3(&VAR_8->tmpdev);
    VAR_8->status = 0;
   }
  }
  break;
 case 8:
 case 9:
  if (VAR_5 != 0x0d && VAR_5 != 0x0a && VAR_5 != 0x20 && VAR_5 != 0x09) {
   if (VAR_5 == 0x3d) {
    if (VAR_8->status == 8) {
     FUNC_2(0x20, &VAR_8->tmpdev);
    } else {
     (*VAR_8->conv1_filter->filter_function)(0x20, VAR_8->conv1_filter);
    }
    FUNC_2(VAR_5, &VAR_8->tmpdev);
    VAR_8->status = 1;
   } else {
    FUNC_2(0x20, &VAR_8->tmpdev);
    FUNC_2(VAR_5, &VAR_8->tmpdev);
    FUNC_0(VAR_8->conv1_filter, &VAR_8->tmpdev);
    FUNC_3(&VAR_8->tmpdev);
    VAR_8->status = 0;
   }
  }
  break;
 default:
  if (VAR_5 == 0x0d || VAR_5 == 0x0a) {
   VAR_8->status = 9;
  } else if (VAR_5 == 0x3d) {
   FUNC_2(VAR_5, &VAR_8->tmpdev);
   VAR_8->status = 1;
  } else {
   (*VAR_8->conv1_filter->filter_function)(VAR_5, VAR_8->conv1_filter);
  }
  break;
 }

 return VAR_5;
}
