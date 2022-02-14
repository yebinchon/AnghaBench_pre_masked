
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_35__ {scalar_t__ (* DepthTestSpan ) (TYPE_9__*,size_t,int ,int ,int *,int *) ;int (* SetBuffer ) (TYPE_9__*,int ) ;int (* WriteMonoindexSpan ) (TYPE_9__*,size_t,int ,int ,int *) ;int (* WriteIndexSpan ) (TYPE_9__*,size_t,int ,int ,size_t*,int *) ;} ;
struct TYPE_34__ {scalar_t__ SWmasking; scalar_t__ SWLogicOpEnabled; } ;
struct TYPE_33__ {scalar_t__ Fog; } ;
struct TYPE_32__ {scalar_t__ Enabled; } ;
struct TYPE_31__ {scalar_t__ Test; } ;
struct TYPE_30__ {scalar_t__ Enabled; } ;
struct TYPE_29__ {scalar_t__ StippleFlag; } ;
struct TYPE_28__ {scalar_t__ Enabled; } ;
struct TYPE_36__ {int RasterMask; TYPE_8__ Driver; TYPE_7__ Color; TYPE_6__ Hint; TYPE_5__ Fog; TYPE_4__ Depth; TYPE_3__ Stencil; TYPE_2__ Polygon; TYPE_1__ Scissor; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef int GLdepth ;
typedef TYPE_9__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t*,size_t*,size_t) ;
 int FUNC_1 (int *,int,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_9__*,size_t,int ,int ,int *) ;
 int FUNC_3 (TYPE_9__*,size_t,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_9__*,size_t,int *,size_t*) ;
 int FUNC_5 (TYPE_9__*,size_t,int ,int ,size_t*,int *) ;
 int FUNC_6 (TYPE_9__*,size_t,int ,int ,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_9__*,size_t,int ,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_9__*,size_t,int ,int ,int *) ;
 int FUNC_9 (TYPE_9__*,size_t,int ,int ,int *) ;
 scalar_t__ FUNC_10 (TYPE_9__*,size_t,int ,int ,int *,int *) ;
 int FUNC_11 (TYPE_9__*,size_t,int ,int ,size_t*,int *) ;
 int FUNC_12 (TYPE_9__*,int ) ;
 int FUNC_13 (TYPE_9__*,size_t,int ,int ,size_t*,int *) ;
 int FUNC_14 (TYPE_9__*,int ) ;
 int FUNC_15 (TYPE_9__*,size_t,int ,int ,int *) ;
 int FUNC_16 (TYPE_9__*,int ) ;
 int FUNC_17 (TYPE_9__*,size_t,int ,int ,int *) ;
 int FUNC_18 (TYPE_9__*,int ) ;

void FUNC_19( GLcontext *VAR_9,
                              GLuint VAR_10, GLint VAR_11, GLint VAR_12, GLdepth VAR_13[],
         GLuint VAR_14, GLenum VAR_15 )
{
    GLuint VAR_16;
    GLubyte VAR_17[VAR_6];
    GLuint VAR_18[VAR_6];


    FUNC_1(VAR_17, 1, VAR_10);

    if ((VAR_9->RasterMask & VAR_8) || VAR_15==VAR_2)
    {
        if (FUNC_2( VAR_9,VAR_10,VAR_11,VAR_12,VAR_17)==0) {
            return;
        }
    }


    if (VAR_9->Scissor.Enabled)
    {
        if (FUNC_7( VAR_9, VAR_10, VAR_11, VAR_12, VAR_17 )==0) {
            return;
        }
    }


    if (VAR_9->Polygon.StippleFlag && VAR_15==VAR_5)
    {
        FUNC_9( VAR_9, VAR_10, VAR_11, VAR_12, VAR_17 );
    }

    if (VAR_9->Stencil.Enabled)
    {

        if (FUNC_8( VAR_9, VAR_10, VAR_11, VAR_12, VAR_17 )==0)
        {
            return;
        }

        FUNC_3( VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_17 );
    }
    else if (VAR_9->Depth.Test)
    {

        if ((*VAR_9->Driver.DepthTestSpan)( VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_17 )==0)
            return;
    }

    if (VAR_9->RasterMask & VAR_7)
    {

        return;
   }

    if ((VAR_9->Fog.Enabled && (VAR_9->Hint.Fog==VAR_4 || VAR_15==VAR_2))
            || VAR_9->Color.SWLogicOpEnabled || VAR_9->Color.SWmasking)
    {
        GLuint VAR_19[VAR_6];

        for (VAR_16=0;VAR_16<VAR_10;VAR_16++)
        {
            VAR_19[VAR_16] = VAR_14;
        }

        if (VAR_9->Fog.Enabled
                && (VAR_9->Hint.Fog==VAR_4 || VAR_15==VAR_2))
        {
            FUNC_4( VAR_9, VAR_10, VAR_13, VAR_19 );
        }

        if (VAR_9->RasterMask & VAR_0)
        {
            FUNC_0( VAR_18, VAR_19, VAR_10 * sizeof(GLuint) );
        }

        if (VAR_9->Color.SWLogicOpEnabled)
        {
            FUNC_5( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19, VAR_17 );
        }

        if (VAR_9->Color.SWmasking)
        {
            FUNC_6( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19 );
        }

        (*VAR_9->Driver.WriteIndexSpan)( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19, VAR_17 );

        if (VAR_9->RasterMask & VAR_0)
        {

             (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_1 );
             for (VAR_16=0;VAR_16<VAR_10;VAR_16++)
             {
                VAR_19[VAR_16] = VAR_14;
             }

             if (VAR_9->Color.SWLogicOpEnabled) {
                 FUNC_5( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19, VAR_17 );
             }
             if (VAR_9->Color.SWmasking) {
                 FUNC_6( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19 );
             }
             (*VAR_9->Driver.WriteIndexSpan)( VAR_9, VAR_10, VAR_11, VAR_12, VAR_19, VAR_17 );
             (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_3 );
        }
    }
    else
    {
        (*VAR_9->Driver.WriteMonoindexSpan)( VAR_9, VAR_10, VAR_11, VAR_12, VAR_17 );

        if (VAR_9->RasterMask & VAR_0)
        {

            (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_1 );
            (*VAR_9->Driver.WriteMonoindexSpan)( VAR_9, VAR_10, VAR_11, VAR_12, VAR_17 );
            (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_3 );
        }
    }
}
