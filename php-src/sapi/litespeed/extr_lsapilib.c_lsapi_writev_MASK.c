
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned int iov_len; char* iov_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,struct iovec*,int) ;

__attribute__((used)) static int FUNC_1( int VAR_5, struct iovec ** VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9;
    int VAR_10 = VAR_8;
    int VAR_11 = VAR_7;

    if (VAR_4)
        return VAR_8;

    while(( VAR_10 > 0 )&&VAR_3 )
    {
        VAR_9 = FUNC_0( VAR_5, *VAR_6, VAR_11 );
        if ( VAR_9 > 0 )
        {
            VAR_10 -= VAR_9;
            if (( VAR_10 <= 0)||( !VAR_3 ))
                return VAR_8 - VAR_10;
            while( VAR_9 > 0 )
            {
                if ( (*VAR_6)->iov_len <= (unsigned int )VAR_9 )
                {
                    VAR_9 -= (*VAR_6)->iov_len;
                    ++(*VAR_6);
                }
                else
                {
                    (*VAR_6)->iov_base = (char *)(*VAR_6)->iov_base + VAR_9;
                    (*VAR_6)->iov_len -= VAR_9;
                    break;
                }
            }
        }
        else if ( VAR_9 == -1 )
        {
            if ( VAR_2 == VAR_0 )
            {
                if ( VAR_8 - VAR_10 > 0 )
                    return VAR_8 - VAR_10;
                else
                    return -1;
            }
            else if ( VAR_2 != VAR_1 )
                return VAR_9;
        }
    }
    return VAR_8 - VAR_10;
}
